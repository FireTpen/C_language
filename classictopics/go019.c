#define _CRT_SECURE_NO_WARNINGS 1
//求一个3*3的整型矩阵对角线元素之和。将原矩阵和求出的和输出
/*
			a a a 
            a a a
            a a a   

思路：①定义一个二维数组 int arr[3][3]
 */

#include<stdio.h>
int matrix();
int diagonal_sum();
int print(int num[][3]);

int main(void)
{
    printf("请输入9个整数：");
    matrix();

    return 0;
}

int matrix()
{
    int arr[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("整型矩阵:\n");
    print(arr);
    printf("对角线的和为:%d\n", diagonal_sum(arr));
}

int print(int num[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    

}
int diagonal_sum(int num[][3])
{
    int sum = num[0][0] + num[1][1] + num[2][2];

    return sum;
}
