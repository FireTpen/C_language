#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 20;
	int num2 = 30;
	int max = 0;
	max = MAX(num1, num2);
	printf("max = %d", max);

	return 0;

}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是: %d\n", num2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 5000)
//	{
//		printf("我要努力敲代码：%d\n", line);
//		line++;
//	}
//	if (line >= 5000)
//		printf("赢取白富美\n");
//	return 0;
//
//}





//#include<stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？(选择1 or 0):> ");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好的offer\n");
//	}
//	else {
//		printf("放弃，回家卖红薯\n");
//	}
//
//	return 0;
//}