#include <stdio.h>
#include <sys/types.h>//open
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>//read
#include <string.h>//strlen
#include <sys/mman.h>

int main()
{
	//打开LCD屏幕
	int fd=open("/dev/fb0",O_RDWR);
	if(fd<0)
	{
		printf("open lcd failed");
		return -1;
	}
	
	//要对LCD设备进行映射操作
	int *lcd = mmap(NULL,800*480*4,PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
	
	//打开图片
	int bmpfd=open("yechui.bmp",O_RDONLY);
	if(bmpfd < 0 )
	{
		perror("open bmp failed");
		return -1;
	}
	
	//读取图片的头信息
	unsigned char head[54]={0};//清空缓冲区
	read(bmpfd,head,54);
	
	int kuan= *((int *)&head[18]);
	int gao = *((int *)&head[22]);
	
	printf("kuan=%d\n",kuan);
	printf("gao=%d\n",gao);
	
	
	//变长数组
	int buf[gao][kuan];//32位图
	char tmp_buf[gao*kuan*3];//24位图
	
	//读图片像素点的数据到tmp_buf
	read(bmpfd,tmp_buf,sizeof(tmp_buf));
	
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a=0;
	unsigned char *p=tmp_buf;
	unsigned int color=0;
	
	int x=0,y=0;
	
	for(y=0;y<gao;y++)
		for(x=0;x<kuan;x++)
		{
			//b=*p;
			//p++;//p=p+1
			
			b=*p++;
			g=*p++;
			r=*p++;
			a=0;
			
			color = a<<24 | r<<16 | g<<8 | b;
			buf[y][x]=color;
			
			//把图片的像素点赋值到LCD设备中
			// *(lcd+y*800+x)=buf[y][x];
			// *(lcd+480*800-1-y*800-x)=buf[y][x];
			*(lcd+(479-y)*800+x)=buf[y][x];
		}
	
	//关闭所有设备
	close(fd);
	close(bmpfd);
	munmap(lcd,gao*kuan*4);
	
	return 0;
}