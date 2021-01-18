#define _CRT_SECURE_NO_WARNINGS 1
//23.求一个4*3的矩阵各行元素的最大值，将原矩阵和求出的最大值全部输出。
#include<stdio.h>
int matrix();
int Max(int num[][3]);
int print(int num[][3]);

int main(void)
{

    printf("请输入12个数：");
    matrix();

    return 0;
}

int matrix()
{
    int arr[4][3];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("整型矩阵:\n");
    print(arr);
    Max(arr);
}

int print(int num[][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
}

int Max(int num[][3])
{
    int i, j;
    int Max1 = num[0][0], Max2 = num[0][0], Max3 = num[0][0], Max4 = num[0][0];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 && num[i][j] > Max1)
                Max1 = num[i][j];            
            if (i == 1 && num[i][j] > Max2)
                Max2 = num[i][j];            
            if (i == 2 && num[i][j] > Max3)
                Max3 = num[i][j];            
            if (i == 3 && num[i][j] > Max4)
                Max4 = num[i][j];          
        }
    }
    printf("第一行的最大值为：%d\n", Max1);
    printf("第二行的最大值为：%d\n", Max2);
    printf("第三行的最大值为：%d\n", Max3);
    printf("第四行的最大值为：%d\n", Max4);

}