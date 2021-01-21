/*求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
5! = 1*2*3*4*5  =
输入
n

输出
Sn的值

样例输入
5
样例输出
153
*/
#include<stdio.h>

int main(void)
{
	int n,num1,num2;
	long Sn = 0, fac;
	scanf("%d",&n);
	if (n > 20)
		return 0;
	for (num1 = 1; num1 <= n; num1++)
	{
		fac = 1;
		for (num2 = 1; num2 <= num1; num2++)
		{
			fac = fac * num2;
		}
		Sn += fac;
	}
	printf("%ld",Sn);
	return 0;
}