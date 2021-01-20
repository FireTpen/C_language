/*题目 1002: [编程入门]三个数最大值

时间限制: 1Sec 内存限制: 128MB 提交: 67920 解决: 32294

题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值。
输入
一行数组，分别为a b c
输出
a b c其中最大的数
样例输入
10 20 30
样例输出
30
*/
#include<stdio.h>
int main(void)
{
	int arr[3];
	int i;
	for(i = 0;i < 3;i++)
	{
	scanf("%d",&arr[i]);
	}	
	max = arr[0];
	for(i = 0;i < 3;i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	printf("%d\n",max);
	return 0;
}