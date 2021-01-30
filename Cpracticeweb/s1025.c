/*已有一个已正序排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
输入
第一行，原始数列。 第二行，需要插入的数字。
输出
排序后的数列
样例输入
1 7 8 17 23 24 59 62 101
50
*/
#include<stdio.h>
int main(void)
{
	int n,i,k;
	int arr[10];
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d",&n);
	for (i = 0; i < 9; i++)
	{
		if (n <= arr[i])
		{
			k = i;
			break;
		}
	}
	for (i = 9;i > k;i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[i] = n;

	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
