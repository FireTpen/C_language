#include<stdio.h>

void InsertNumber(int *arr)
{
	int i;
	for (i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
}

void CompareAndExchange(int *arr)
{
	int Max, Min,i,tmp,m,n;
	Max = arr[0];
	Min = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
			n = i;
		}
	}
	if (Min != arr[0])
	{
		tmp = arr[0];
		arr[0] = Min;
		arr[n] = tmp;
	}
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
			m = i;
		}
	}	
	tmp = arr[9];
	arr[9] = Max;
	arr[m] = tmp;
}

void PrintNumber(int* arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main(void)
{
	int arr[10];
	/*输入10个数*/
	InsertNumber(arr);
	/*将其中最小的数与第一个数对换，把最大的数与最后一个数对换*/
	CompareAndExchange(arr);
	/*输出10个数*/
	PrintNumber(arr);
	return 0;
}