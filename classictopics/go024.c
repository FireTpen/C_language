#define _CRT_SECURE_NO_WARNINGS 1
//24.求一个的矩阵中元素的最大值，将原矩阵和求出的最大值全部输出。

#include<stdio.h>

int main(void)
{
    int m, n;
    printf("请输入M和N的值:");
    scanf("%d %d",&m,&n);
    int arr[10][10];


    printf("请输入M*N个数：");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("整型矩阵:\n");
    int Max1 = arr[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] > Max1)
                Max1 = arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("最大值为：%d\n", Max1);

    return 0;
}



