/*
有三个整数a b c,由键盘输入，输出其中的最大的数。
输入
一行数组，分别为a b c
输出
a b c其中最大的数
样例输入
10 20 30
样例输出
30
*/
#include<stdio.h>
int main()
{
	int a, b, c,max = 0;
	scanf("%d%d%d",&a,&b,&c);
	if (a > max)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;
		
		printf("%d\n",max);
	return 0;
}
