#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
double power(double a, int n);
int main(void)
{
	double x;
	int n;
	scanf("%lf %d",&x,&n);
	printf("%.2f\n",power(x,n));
	return 0;
}

double power(double a, int n)
{
	if(n == 0) return 1;
	if (n == 1) return a;
	return power(a, n / 2) * power(a, n - n / 2);
}