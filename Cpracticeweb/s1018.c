/*
2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
输入
N
输出
数列前N项和
样例输入
10
样例输出
16.48
*/
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	double n = 2,m = 1,temp;
	double k, sum = 0;
	int i;
	for (i = 1;i <= N;i++)
	{
		temp = n;
		k = n / m;	
		n = (temp + m);
		m = temp;		
		sum += k;
	}
	printf("%.2lf\n",sum);
	return 0;
}
