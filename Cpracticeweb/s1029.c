/*写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
输入
一个数
输出
如果是素数输出prime 如果不是输出not prime
样例输入
97
样例输出
prime
*/
#include<stdio.h>

void Prime_Number(int a);

int main(void)
{
	int a;

	scanf("%d",&a);

	Prime_Number(a);

	return 0;
}

void Prime_Number(int a)
{
	int i, k = 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			k++;
	}
	if (k == 0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}