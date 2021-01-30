/*写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
输入
一个四位数
输出
增加空格输出
样例输入
1990
样例输出
1 9 9 0
*/
#include<stdio.h>

void Add_Space(char* arr)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%c",arr[i]);
		if (i < 3)
		{
			printf(" ");
		}
	}
}

int main(void)
{
	char arr[5];
	scanf("%s",arr);
	Add_Space(arr);
	return 0;
}