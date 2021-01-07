#include<stdio.h>
/*1、编写一个程序，此程序要求输入一个整数，然后打印出从输入的值(含)到比输入的值大 10(含)的所有整数
值(比如输入 5，则输出 5 到 15)。要求在各个输出值之间用空格、制表符或者换行符分开。*/
int main(void)
{
	int val,i;
	printf("please input number:");
	scanf("%d",&val);
	for(i = val;i <= val+10;i++)
	{
		printf("%d\t",i);	
	}
	return 0;
}