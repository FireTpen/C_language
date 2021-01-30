#include<stdio.h>
int Max_Common_divisor(int a, int b);
int Min_Common_multiple(int a, int b);

int main(void)
{
	int a, b,temp;
	scanf("%d%d",&a,&b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("%d ",Max_Common_divisor(a,b));
	printf("%d ",Min_Common_multiple(a,b));
	return 0;
}

int Max_Common_divisor(int x,int y)
{
	int r;
	r = x % y;
	x = y;
	y = r;
	return y;
}

int Min_Common_multiple(int x,int y)
{
	return (x * y) / Max_Common_divisor(x, y);
}