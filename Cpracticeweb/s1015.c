/*求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
输入
a b c
输出
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
样例输入
100 50 10
样例输出
47977.93
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	double a, b, c;
	
	double sum = 0, sum_a = 0, sum_b = 0, sum_c = 0;
	scanf("%lf%lf%lf",&a,&b,&c);
	for (i = 1; i <= a; i++)
	{
		sum_a += i;
	}
	for (i = 1; i <= b; i++)
	{
		sum_b += pow(i,2);
	}
	for (i = 1; i <= c; i++)
	{
		sum_c += (1.0 / i);
	}

	sum = sum_a + sum_b + sum_c;
	printf("%.2f",sum);
	return 0;
}