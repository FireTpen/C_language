/*写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串（不包含空格）。
输入
一行字符
输出
逆序后的字符串
样例输入
123456abcdef 
样例输出
fedcba654321
*/
#include<stdio.h>
void Reverse(char *ch)
{
	
	int i,j;
	char temp;
	for (i = 0; i < 20; i++)
	{
		if(ch[i] == '\0')
			break;
	}

	for (j = 0;j < i/2; j++)
	{
		temp = ch[j];
		ch[j] = ch[(i-1)-j];
		ch[(i - 1) - j] = temp;
	}
	printf("%s", ch);
}
int main(void)
{
	char ch[20];

	scanf("%s",ch);

	Reverse(ch);
	return 0;
}
