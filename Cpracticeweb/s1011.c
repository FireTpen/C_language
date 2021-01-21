/*输入两个正整数m和n，求其最大公约数和最小公倍数。
输入
两个整数
输出
最大公约数，最小公倍数
样例输入
5 7
样例输出
1 35
*/

#include<stdio.h>
int gcd(int x, int y);
int lcm(int x, int y);
int main()
{
	int num1,num2,result_gcd,result_lcm;
	scanf("%d %d",&num1,&num2);
	result_gcd = gcd(num1,num2);
	result_lcm = lcm(num1,num2);

	printf("%d %d\n",result_gcd,result_lcm);

	return 0;
}

int gcd(int x, int y)
{
	int temp = 0;
	if(x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (x == y)
	{
		return x;
	}
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}