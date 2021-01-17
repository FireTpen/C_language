#define _CRT_SECURE_NO_WARNINGS 1
//20.求一个4 * 3的矩阵各行元素的平均值；将原矩阵和求出的平均值全部输出。
#include<stdio.h>
int matrix();
int average(int num[][3]);
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
    average(arr);
      
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

int average(int num[][3])
{
    int i, j; 
    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, the_sum = 0;
    double ave,ave1,ave2,ave3,ave4;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            the_sum += num[i][j];
            sum += num[i][j];
        }
        if (i == 0)
            sum1 = sum;
        else if (i == 1)
            sum2 = sum;
        else if (i == 2)
            sum3 = sum;
        else if (i == 3)
            sum4 = sum;
        sum = 0;
    }
    ave = the_sum / 12;
    ave1 = sum1 / 3;
    ave2 = sum2 / 3;
    ave3 = sum3 / 3;
    ave4 = sum4 / 3;

    printf("总的平均值为：%.2lf\n",ave);
    printf("第一行的平均值为：%.2lf\n",ave1);
    printf("第二行的平均值为：%.2lf\n",ave2);
    printf("第三行的平均值为：%.2lf\n",ave3);
    printf("第四行的平均值为：%.2lf\n",ave4);
}
