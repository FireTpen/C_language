#define _CRT_SECURE_NO_WARNINGS 1
/*25.�ж�һ��N*N�ľ����Ƿ�Ϊ�Գƾ��󣬽�ԭ����������жϽ�������
  aij = aji(0<=i,j<=n-1)
*/
#include<stdio.h>

int main(void)
{
    int n,m;
    printf("������N��ֵ:");
    scanf("%d", &n);
    int arr[10][10];
    

    printf("������N*N������");
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("aij����:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("aji����:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    if (arr[i][j] == arr[j][i])
        printf("��N�׾���Ϊ�ǶԳƾ���\n");
    else
        printf("��N�׾���Ϊ���ǶԳƾ���\n");
    
    return 0;
}
//������N��ֵ:3
//������N* N������1 2 3 2 1 2 3 2 1