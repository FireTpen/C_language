#include<stdio.h>

int main(void)
{
	int row = 0,row_i,column_j;
	int arr[100][100]={0};
	
	while(row < 1 || row > 100)
	{
		printf("请输入杨辉三角的行数：");
		scanf("%d",&row);
	}
	
	//对数组arr[row][row]进行赋值
	for(row_i = 0; row_i<row;row_i++)
	{
		arr[row_i][0]=1;
	}
	for(row_i = 1; row_i <= row; row_i++)
	{
		
		for(column_j = 1; column_j <=row_i;column_j++)
		{
			arr[row_i][column_j] = arr[row_i-1][column_j-1]+arr[row_i-1][column_j];
		}
	}
	
	//打印数组arr[row][row]
	for(row_i = 0;row_i < row; row_i++)
	{
		
		for(column_j = 0;column_j < row-row_i;column_j++)
		{
			printf("  ");
		}
		
		for(column_j = 0; column_j <= row_i;column_j++)
		{
			
			printf("%4d",arr[row_i][column_j]);		
		}			
		printf("\n");
	}

	return 0;
}