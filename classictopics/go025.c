#define _CRT_SECURE_NO_WARNINGS 1
/*25.判断一个N*N的矩阵是否为对称矩阵，将原矩阵输出，判断结果输出。
  aij = aji(0<=i,j<=n-1)
*/
#include<stdio.h>

int main(void)
{
    int n,m;
    printf("请输入N的值:");
    scanf("%d", &n);
    int arr[10][10];
    

    printf("请输入N*N个数：");
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("aij矩阵:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("aji矩阵:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    if (arr[i][j] == arr[j][i])
        printf("该N阶矩阵为是对称矩阵\n");
    else
        printf("该N阶矩阵为不是对称矩阵\n");
    
    return 0;
}
//请输入N的值:3
//请输入N* N个数：1 2 3 2 1 2 3 2 1