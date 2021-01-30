/*用简单素数筛选法求N以内的素数。
输入
N
输出
2～N的素数
样例输入
100
样例输出
2
3
5
7
11
13
*/
#include<stdio.h>
int main(void)
{
	int N,i,j,k;
	scanf("%d",&N);
	for (i = 2; i <= N; i++)
	{
		k = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				k++;
			}
		}
		if (k == 0)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}