#define _CRT_SECURE_NO_WARNINGS 1
//20.��һ��4 * 3�ľ������Ԫ�ص�ƽ��ֵ����ԭ����������ƽ��ֵȫ�������
#include<stdio.h>
int matrix();
int average(int num[][3]);
int print(int num[][3]);

int main(void)
{
    printf("������12������");
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

    printf("���;���:\n");
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

    printf("�ܵ�ƽ��ֵΪ��%.2lf\n",ave);
    printf("��һ�е�ƽ��ֵΪ��%.2lf\n",ave1);
    printf("�ڶ��е�ƽ��ֵΪ��%.2lf\n",ave2);
    printf("�����е�ƽ��ֵΪ��%.2lf\n",ave3);
    printf("�����е�ƽ��ֵΪ��%.2lf\n",ave4);
}
