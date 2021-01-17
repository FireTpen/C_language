#define _CRT_SECURE_NO_WARNINGS 1
//21.求一个3 * 4的矩阵各列元素的平均值；将原矩阵和求出的平均值全部输出
#include<stdio.h>
int matrix();
int average(int num[][4]);
int print(int num[][4]);

int main(void)
{
    printf("请输入12个数：");
    matrix();

    return 0;
}

int matrix()
{
    int arr[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("整型矩阵:\n");
    print(arr);
    average(arr);

}

int print(int num[][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
}

int average(int num[][4])
{
    int i, j;
    double sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    double ave, ave1, ave2, ave3, ave4;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {            
            sum += num[i][j];
            if (j == 0)
                sum1 += num[i][j]; //1+5+9
            else if (j == 1)
                sum2 += num[i][j];// 2+6+10
            else if (j == 2)
                sum3 += num[i][j];//3+7+11
            else if (j == 3)
                sum4 += num[i][j];//4+8+12
        }


    }
    ave  = sum  / 12;
    ave1 = sum1 / 3;
    ave2 = sum2 / 3;
    ave3 = sum3 / 3;
    ave4 = sum4 / 3;

    printf("总的平均值为：%.2lf\n", ave);
    printf("第一列的平均值为：%.2lf\n", ave1);
    printf("第二列的平均值为：%.2lf\n", ave2);
    printf("第三列的平均值为：%.2lf\n", ave3);
    printf("第四列的平均值为：%.2lf\n", ave4);
}