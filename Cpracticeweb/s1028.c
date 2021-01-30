/*求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值。
输入
a b c
输出
x1=? x2=?
样例输入
4 1 1
样例输出
x1=-0.125+0.484i x2=-0.125-0.484i
*/
#include<stdio.h>
#include<math.h>

Greater_than_zero(double a, double b, double c, double delta);
Less_than_zero(double a, double b, double c);
Equal_zero(double a, double b, double c, double delta);


int main(void)
{
	double a, b, c,delta;
	scanf("%lf%lf%lf",&a,&b,&c);
	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		Greater_than_zero(a,b,c,delta);
	}	
	else if (delta == 0)
	{
		Equal_zero(a, b, c,delta);
	}	
	else if (delta < 0)
	{
		Less_than_zero(a, b, c);
	}
	return 0;
}

Greater_than_zero(double a, double b, double c, double delta)
{
	double k1, k2;
	k1 = (-b + sqrt(delta)) / (2 * a);
	k2 = (-b - sqrt(delta)) / (2 * a);
	printf("x1=%.3lf x2=%.3lf\n",k1,k2);
}

Less_than_zero(double a, double b, double c)
{
	printf("x1=%.3lf+%.3lfi ", -b / (2 * a), sqrt(4 * a * c - b * b) / (2 * a));
	printf("x2=%.3lf-%.3lfi", -b / (2 * a), sqrt(4 * a * c - b * b) / (2 * a));
	printf("\n");
}

Equal_zero(double a, double b, double c, double delta)
{
	double k1;
	k1 = -b / (2 * a);
	printf("x1=%.3lf x2=%.3lf\n", k1,k1);
}