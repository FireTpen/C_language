#define _CRT_SECURE_NO_WARNINGS 1
//��һ��3*3�����;���Խ���Ԫ��֮�͡���ԭ���������ĺ����
/*
			a a a 
            a a a
            a a a   

˼·���ٶ���һ����ά���� int arr[3][3]
 */

#include<stdio.h>
int matrix();
int diagonal_sum();
int print(int num[][3]);

int main(void)
{
    printf("������9��������");
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

    printf("���;���:\n");
    print(arr);
    printf("�Խ��ߵĺ�Ϊ:%d\n", diagonal_sum(arr));
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
