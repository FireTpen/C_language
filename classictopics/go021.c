#define _CRT_SECURE_NO_WARNINGS 1
//21.��һ��3 * 4�ľ������Ԫ�ص�ƽ��ֵ����ԭ����������ƽ��ֵȫ�����
#include<stdio.h>
int matrix();
int average(int num[][4]);
int print(int num[][4]);

int main(void)
{
    printf("������12������");
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

    printf("���;���:\n");
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

    printf("�ܵ�ƽ��ֵΪ��%.2lf\n", ave);
    printf("��һ�е�ƽ��ֵΪ��%.2lf\n", ave1);
    printf("�ڶ��е�ƽ��ֵΪ��%.2lf\n", ave2);
    printf("�����е�ƽ��ֵΪ��%.2lf\n", ave3);
    printf("�����е�ƽ��ֵΪ��%.2lf\n", ave4);
}