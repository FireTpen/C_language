#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//5.5����Ƕ�׵���
//#include <stdio.h>
//void A(int);
//void B(int);
//void C(int);
//int main(void)
//{
//	int x = 10;
//
//	A(x);
//
//	return 0;
//}
//void A(int x)
//{
//	printf("A�յ����ݹ�����x=%d\n",x);
//	x++;
//	B(x);
//}
//void B(int x)
//{
//	printf("B�յ����ݹ�����x=%d\n",x);
//	x++;
//	C(x);
//}
//void C(int x)
//{
//	printf("C�յ����ݹ�����x=%d\n",x);
//}


////5.3 ��ֵ����������ʵ�ε�ֵ
//void swap(int a, int b); //������������ ������Ϊ��ʽ����
//int main(void)
//{
//	int x = 5;
//	int y = 10;
//
//	printf("����ǰx=%d,y=%d\n",x,y);
//
//	swap(x, y); //�����ĵ��ã�x��y��Ϊʵ�ʲ���
//
//	printf("������x=%d,y=%d\n",x,y);
//
//	return 0;
//}
//
//void swap(int a, int b)
//{
//	int empty;
//	empty = a;
//	a = b;
//	b = empty;
//
//}

//5.2 ���1~n�ĺ�
//int sum(int n); //����������
//int main(void)
//{
//	int n;
//	printf("������һ��ֵ��");
//	scanf("%d",&n);
//	printf("1��%d�ĺ��ǣ�%d", n, sum(n));
//
//	return 0;
//}
//
//int sum(int n) //�����Ķ���
//{
//	int s = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		s = s + i;
//	}
//	return s;
//}