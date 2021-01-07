#include<stdio.h>

int main(void)
{
	char ch ;
	ch = '\r';
	
	printf("输出：%c\n",ch);
	ch = 13;
	printf("输出%c\n",ch);
	ch = 015;
	printf("输出%c\n",ch);
	ch = 0x0D;
	printf("输出%c\n",ch);
	return 0;
}
