/*输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

输入
一行字符

输出
统计值

样例输入
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
样例输出
23 16 2 4
*/
#include<stdio.h>
#define N 100
int main(void)
{
	
	int a;
	int letter = 0, num = 0, space = 0, other = 0;
	
	while ((a = getchar())!= '\n')
	{
		
		if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
		{
			letter++;
		}
		else if (a >= '0' && a <= '9')
		{
			num++;
		}
		else if (a == ' ')
		{
			space++;
		}
		else
			other++;
	}
	printf("%d %d %d %d\n",letter,num,space,other);
	return 0;
}