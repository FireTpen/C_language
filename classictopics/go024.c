#define _CRT_SECURE_NO_WARNINGS 1
//24.��һ���ľ�����Ԫ�ص����ֵ����ԭ�������������ֵȫ�������

#include<stdio.h>

int main(void)
{
    int m, n;
    printf("������M��N��ֵ:");
    scanf("%d %d",&m,&n);
    int arr[10][10];


    printf("������M*N������");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("���;���:\n");
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
    printf("���ֵΪ��%d\n", Max1);

    return 0;
}



