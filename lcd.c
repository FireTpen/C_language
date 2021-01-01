#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{

	int lcd =open("/dev/fb0",O_RDWR);
	if(lcd < 0)
	{
		perror("open lcd failed");
		return -1;
	}
	int buf[800*480] = {0};
	
	int i = 0;
	for(i = 0;i<800*480;i++)
	{
		buf[i] = 0x008080;
	}
    write(lcd,buf,sizeof(buf));
	
	close(lcd);
	return 0;
}