#include<stdio.h>

int main(void)
{
	char arr[128];
	int i;
	printf("请输入一段文字:");
	scanf("%s",arr);
	printf("%s\n",arr);
	for(i = 0;i < 128;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}