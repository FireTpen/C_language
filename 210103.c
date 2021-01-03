#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//5.5函数嵌套调用
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
//	printf("A收到传递过来的x=%d\n",x);
//	x++;
//	B(x);
//}
//void B(int x)
//{
//	printf("B收到传递过来的x=%d\n",x);
//	x++;
//	C(x);
//}
//void C(int x)
//{
//	printf("C收到传递过来的x=%d\n",x);
//}


////5.3 传值，交换两个实参的值
//void swap(int a, int b); //函数的声明， （）里为形式参数
//int main(void)
//{
//	int x = 5;
//	int y = 10;
//
//	printf("交换前x=%d,y=%d\n",x,y);
//
//	swap(x, y); //函数的调用（x，y）为实际参数
//
//	printf("交换后x=%d,y=%d\n",x,y);
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

//5.2 输出1~n的和
//int sum(int n); //函数的声明
//int main(void)
//{
//	int n;
//	printf("请输入一个值：");
//	scanf("%d",&n);
//	printf("1到%d的和是：%d", n, sum(n));
//
//	return 0;
//}
//
//int sum(int n) //函数的定义
//{
//	int s = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		s = s + i;
//	}
//	return s;
//}