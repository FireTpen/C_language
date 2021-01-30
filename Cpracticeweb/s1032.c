/* 写一函数，将两个字符串连接
输入
两行字符串
输出
链接后的字符串
样例输入
123
abc
样例输出
123abc
*/
#include<stdio.h>
void link(char* ch1, char* ch2)
{
	int i,j,k;
	for (i = 0; i < 10; i++)
	{
		if (ch1[i] == '\0')
			break;
	}

	for (j = 0;j < 10;j++)
	{
		ch1[i] = ch2[j];
		i++;	
	}
	printf("%s", ch1);

}
int main(void)
{
	char ch1[20];
	char ch2[10];
	scanf("%s%s", ch1, ch2);
	link(ch1, ch2);
	return 0;
}