/*求一个3×3矩阵对角线元素之和。
输入
矩阵
输出
主对角线 副对角线 元素和
样例输入
1 2 3
1 1 1
3 2 1
样例输出
3 7*/
#include<stdio.h>
int main(void)
{
	int i, j, sum1 = 0, sum2 = 0, arr[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
			if (i == j)
				sum1 += arr[i][j];
			if (i + j == 2)
				sum2 += arr[i][j];
		}
	}
	printf("%d %d",sum1,sum2);
		
	return 0;
}