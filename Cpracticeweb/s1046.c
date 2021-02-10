#include <stdio.h>
#include <string.h>
#define N 100
//输入数组的数据
int InsertArray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
//数字后移
void Moveback(int *arr,int n,int m)
{
	int i,j;
	int arr_exchange[N];
	for(j=0,i=n-m;i<n;i++,j++)
	{
		arr_exchange[j] = arr[i];
	}

	for(i = 0;i < m;i++)
	{
		 printf("%d ",arr_exchange[i]);
	}
}
//显示数组
void Display(int *arr,int n,int m)
{
	int i;
	for(i=0;i<n-m;i++)
	{
		 printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[N];
	int n,m;
	scanf("%d",&n);
	
	InsertArray(arr,n);
	
	scanf("%d",&m);
	Moveback(arr,n,m);
	
	Display(arr,n,m);

	
	return 0;
}