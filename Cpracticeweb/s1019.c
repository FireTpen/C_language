/*
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
输入
M N
输出
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
样例输入
1000 5
样例输出
31.25 2875.00
*/
#include<stdio.h>
int main()
{
	int i;
	double M,M_init = 0, N, h = 0, S = 0;
	scanf("%lf %lf",&M,&N);
	M_init = M;

	for (i = 1; i < N; i++)
	{
		h = M / 2;
		M = h;

		S += (h + h);
	}
	M /= 2;
	S = (S + M_init);

	printf("%.2lf ",M);
	printf("%.2lf\n",S);
	return 0;
}
