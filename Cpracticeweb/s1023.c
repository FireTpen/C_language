/*用选择法对10个整数从小到大排序。
输入
输入10个无序的数字
输出
排序好的10个整数
样例输入
4 85  3 234 45 345 345 122 30 12
样例输出
3
4
12
30
45
85
122
234
345
345*/
#include <stdio.h>
#define N 10
int main()
{
	int arr[N];
	int i,j = 0,temp = 0;
	
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j <= N; j++)
	{
		for (i = 1; i < N; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}

		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}