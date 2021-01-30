/*编写一函数，由实参传来一个字符串，统计此字符串中字母、数字
、空格和其它字符的个数，在主函数中输入字符串以
及输出上述结果。 只要结果，别输出什么提示信息。
输入
一行字符串
输出
统计数据，4个数字，空格分开。
样例输入
!@#$%^QWERT    1234567
样例输出
5 7 4 6 
*/
#include<stdio.h>
void Statistics(char* arr,int sum)
{
	int i, letter = 0, number = 0, space = 0, others = 0;

	for (i = 0; i < sum; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i]>='a' && arr[i] <= 'z')
		{
			letter++;
		}
		else if (arr[i] >= '0' && arr[i] <= '9')
		{
			number++;
		}
		else if (arr[i] == ' ')
		{
			space++;
		}
		else
			others++;
	}
	printf("%d %d %d %d",letter,number,space,others);
}

int main(void)
{
	int i, sum = 0;
	char arr[100];
	gets(arr);
	for (i = 0; i < 100; i++) {
		if (arr[i] == '\0')
		{
			break;
		}
		sum++;
	}
	Statistics(arr,sum);
	return 0;
}