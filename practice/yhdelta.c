#include<stdio.h>
#include<stdlib.h>

#define DEBUG
#define N 10
int main(void)
{
	int a[N][N]={{1},{1,1}};
	int i,j;
	for(i = 2;i < N;i++)
	{
		for(j = 0;j<=i;j++)
		{
                        #ifdef DEBUG
			a[i][j]=a[i-1][j]+a[i-1][j-1];//上方和左上角之和
			printf("%d\n",a[i][j]);
			system("pause");
                        #endif //DEBUG
		}
	}



        //打印杨辉三角
	for(i = 0;i < N;i++)
	{
		for(j = 0;j <= i;j++)
		{

			printf("%d\t",a[i][j]);
		}
		printf("\n");
	
	}


	return 0;
}
