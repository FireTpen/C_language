#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int x = 20;

void test()
{
	int x = 30;
	printf("x = %d\n",x);

}

int main(void)
{
	test();
	printf("x = %d\n",x);

	return 0;
}



//#include<stdio.h>
//int main(void)
//{
//	int x = 20;
//
//	{
//		int y = 30;
//		printf("%d\n",y);
//	}
//	//printf("%d\n", y); //����y�������ⲻ�ɼ�
//	printf("%d\n", x);
//	return 0;
//}


//5.7��������������������
//#include<stdio.h>
//int x = 20;  //ȫ�ֱ���
//
//void test(int n)  //��ʽ����Ҳ�Ǿֲ�����
//{
//	int y = 30; //�ֲ�����
//
//	printf("x = %d,n = %d,y = %d\n",x,n,y);
//}
//
//int main(void)
//{
//	int z = 20; // �ֲ�����
//	test(z);
//	printf("x = %d,z = %d\n",x,z);
//	return 0;
//}