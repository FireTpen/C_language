#include<stdio.h>

int main(void)
{
	int i,j,k;
	int n;
	printf("请输入一个奇数:");
	scanf("%d",&n);
	n = n/2+1;
	
	//打印上半个三角形
	for(i = 1;i <= n;i++)
	{
		for(j = i;j <= n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//打印下半个三角形
	for(i = 2;i <= n;i++) //控制行数
	{
		for(j = 1;j < i+1;j++)
		{
			printf(" ");
		}
		for(k=n*2-1;k>=2*i-1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}