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
//	//printf("%d\n", y); //变量y在语句块外不可见
//	printf("%d\n", x);
//	return 0;
//}


//5.7变量的生存期与作用域
//#include<stdio.h>
//int x = 20;  //全局变量
//
//void test(int n)  //形式参数也是局部变量
//{
//	int y = 30; //局部变量
//
//	printf("x = %d,n = %d,y = %d\n",x,n,y);
//}
//
//int main(void)
//{
//	int z = 20; // 局部变量
//	test(z);
//	printf("x = %d,z = %d\n",x,z);
//	return 0;
//}