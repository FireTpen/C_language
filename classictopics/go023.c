#define _CRT_SECURE_NO_WARNINGS 1
//23.��һ��4*3�ľ������Ԫ�ص����ֵ����ԭ�������������ֵȫ�������
#include<stdio.h>
int matrix();
int Max(int num[][3]);
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
    printf("��һ�е����ֵΪ��%d\n", Max1);
    printf("�ڶ��е����ֵΪ��%d\n", Max2);
    printf("�����е����ֵΪ��%d\n", Max3);
    printf("�����е����ֵΪ��%d\n", Max4);

}