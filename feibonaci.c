#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int f1, f2;
	f1 = f2 = 1;
	printf("%10d %10d ",f1,f2);
	int n = 2;
	for (int i = 3; i <= 20; i++)
	{
		int f = f1 + f2;
		printf("%10d",f);
		n++;
		if (n % 5 == 0)
			printf("\n");
		f1 = f2;
		f2 = f;
	}
	return 0;
}