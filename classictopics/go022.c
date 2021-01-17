#define _CRT_SECURE_NO_WARNINGS 1
//22.求一个3 * 5的矩阵各列元素的最大值，将原矩阵和求出的最大值全部输出。
#include<stdio.h>
int matrix();
int Max(int num[][5]);
int print(int num[][5]);

int main(void)
{

    printf("请输入15个数：");
    matrix();

    return 0;
}

int matrix()
{
    int arr[3][5];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("整型矩阵:\n");
    print(arr);
    Max(arr);
}

int print(int num[][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
}

int Max(int num[][5])
{
    int i, j;
    int Max1 = num[0][0], Max2 = num[0][0], Max3 = num[0][0], Max4 = num[0][0], Max5 = num[0][0] ;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                if (num[i][j] > Max1)
                    Max1 = num[i][j];
            }
            else if (j == 1)
            {
                if (num[i][j] > Max2)
                    Max2 = num[i][j];
            }
            else if (j == 2)
            {
                if (num[i][j] > Max3)
                    Max3 = num[i][j];
            }           
            else if (j == 3)
            {
                if (num[i][j] > Max4)
                    Max4 = num[i][j];
            }            
            else if (j == 4)
            {
                if (num[i][j] > Max5)
                    Max5 = num[i][j];
            }
        }
    }
    printf("第一列的最大值为：%d\n",Max1);
    printf("第二列的最大值为：%d\n",Max2);
    printf("第三列的最大值为：%d\n",Max3);
    printf("第四列的最大值为：%d\n",Max4);
    printf("第五列的最大值为：%d\n",Max5);

}