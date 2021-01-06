#define _CRT_SECURE_NO_WARNINGS 1

//5.11 条件编译
//指令如下：#if / #endif / #else / #elif / #ifdef
////例5-22
//#include<stdio.h>
//#include<stdlib.h>
//
//#define DEBUG
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		#ifdef DEBUG  //调试程序
//		printf("i = %d, sum = %d",i,sum);
//		system("pause");
//		#endif // DEBUG
//		sum = sum + i;
//	}
//	printf("Sum is : %d\n", sum);
//
//	return 0;
//}


////例5-21
//#include<stdio.h>
//#define FIRST
//#define SECOND
//int main(void)
//{
//#ifdef FIRST
//	printf("1\n");
//#elif defined SECOND
//	printf("2\n");
//#else
//	printf("3\n");
//#endif // FIRST
//
//	return 0;
//}

////例 5-20
//#include <stdio.h>
//
//#define HI
//
//int main(void)
//{
//#ifdef HI
//	printf("HI已定义");
//#else
//	printf("HI未定义");
//#endif // HI
//
//	return 0;
//}


////例5-19①
//#include <stdio.h>
//
//#define HI 1
//
//int main(void)
//{
//	#if HI
//		printf("HI为非0！");
//	#else
//		printf("HI为0！");
//	#endif // 0
//
//	return 0;
//}



////5.10宏定义与宏展开
////#define指令
//
//
//#include<stdio.h>
//
//#define PI 3.14 //宏名字一般用大写字母
//#define PRICE 23.5           
//#define NUM 3
//#define TOTAL (PRICE * NUM)  //宏定义的嵌套
//#define PRINT(x) printf("%d\n",x) //宏定义
//
//int main(void)
//{
//	int t = TOTAL;
//
//	printf("%d\n",t);
//
//	PRINT(5); //宏调用
//
//	return 0;
//}


//5.8静态局部变量与非静态局部变量
////void test()
//{
//	static int x = 10; //只会初始化一次
//
//	int y = 10; //每次调用都会重新初始化
//
//	printf("x = %d, y = %d\n",x,y); 
//	x = x + 10;
//	y = y + 10;
//}
//
//
//int main(void)
//{
//	test(); // x = 10, y = 10
//	test(); // x = 20, y = 10
//	test(); // x = 30, y = 10
//
//	return 0;
//}
