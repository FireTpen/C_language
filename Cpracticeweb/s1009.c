/*给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
输入
一个不大于5位的数字
输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
样例输入
12345
样例输出
5
1 2 3 4 5
54321
*/
#include<stdio.h>
int main()
{
	int num,num1,i, count = 0,arr[5];
	scanf("%d",&num);
	num1 = num;
	while (num1)
	{
		num1 = num1 / 10;
		count++;
	}
	printf("%d\n",count);

	for (i = 0; i < 5; i++)
	{
		arr[i] = num % 10;
		num /= 10;
	}
	int j;
	for (j = count - 1; j >= 0; j--)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}