#define _CRT_SECURE_NO_WARNINGS 1

//5.11 ��������
//ָ�����£�#if / #endif / #else / #elif / #ifdef
////��5-22
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
//		#ifdef DEBUG  //���Գ���
//		printf("i = %d, sum = %d",i,sum);
//		system("pause");
//		#endif // DEBUG
//		sum = sum + i;
//	}
//	printf("Sum is : %d\n", sum);
//
//	return 0;
//}


////��5-21
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

////�� 5-20
//#include <stdio.h>
//
//#define HI
//
//int main(void)
//{
//#ifdef HI
//	printf("HI�Ѷ���");
//#else
//	printf("HIδ����");
//#endif // HI
//
//	return 0;
//}


////��5-19��
//#include <stdio.h>
//
//#define HI 1
//
//int main(void)
//{
//	#if HI
//		printf("HIΪ��0��");
//	#else
//		printf("HIΪ0��");
//	#endif // 0
//
//	return 0;
//}



////5.10�궨�����չ��
////#defineָ��
//
//
//#include<stdio.h>
//
//#define PI 3.14 //������һ���ô�д��ĸ
//#define PRICE 23.5           
//#define NUM 3
//#define TOTAL (PRICE * NUM)  //�궨���Ƕ��
//#define PRINT(x) printf("%d\n",x) //�궨��
//
//int main(void)
//{
//	int t = TOTAL;
//
//	printf("%d\n",t);
//
//	PRINT(5); //�����
//
//	return 0;
//}


//5.8��̬�ֲ�������Ǿ�̬�ֲ�����
////void test()
//{
//	static int x = 10; //ֻ���ʼ��һ��
//
//	int y = 10; //ÿ�ε��ö������³�ʼ��
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
