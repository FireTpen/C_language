#include <stdio.h>
#include <sys/types.h>//open
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>//read
#include <string.h>//strlen
#include <sys/mman.h>

int main()
{
	//��LCD��Ļ
	int fd=open("/dev/fb0",O_RDWR);
	if(fd<0)
	{
		printf("open lcd failed");
		return -1;
	}
	
	//Ҫ��LCD�豸����ӳ�����
	int *lcd = mmap(NULL,800*480*4,PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
	
	//��ͼƬ
	int bmpfd=open("yechui.bmp",O_RDONLY);
	if(bmpfd < 0 )
	{
		perror("open bmp failed");
		return -1;
	}
	
	//��ȡͼƬ��ͷ��Ϣ
	unsigned char head[54]={0};//��ջ�����
	read(bmpfd,head,54);
	
	int kuan= *((int *)&head[18]);
	int gao = *((int *)&head[22]);
	
	printf("kuan=%d\n",kuan);
	printf("gao=%d\n",gao);
	
	
	//�䳤����
	int buf[gao][kuan];//32λͼ
	char tmp_buf[gao*kuan*3];//24λͼ
	
	//��ͼƬ���ص�����ݵ�tmp_buf
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
			
			//��ͼƬ�����ص㸳ֵ��LCD�豸��
			// *(lcd+y*800+x)=buf[y][x];
			// *(lcd+480*800-1-y*800-x)=buf[y][x];
			*(lcd+(479-y)*800+x)=buf[y][x];
		}
	
	//�ر������豸
	close(fd);
	close(bmpfd);
	munmap(lcd,gao*kuan*4);
	
	return 0;
}