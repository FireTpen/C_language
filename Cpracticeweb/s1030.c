/*写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
输入
一个3x3的矩阵
输出
无
样例输入
1 2 3  
4 5 6
7 8 9
样例输出
1 4 7   arr[0][0] arr[0][1] arr[0][2]
2 5 8   arr[1][0] arr[1][1] arr[1][2]
3 6 9   arr[2][0] arr[2][1] arr[2][2]
*/
#include<stdio.h>

int main(void)
{
	int i, j,temp;
	int arr[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
