#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
//例6-2：输入n(n<=10)及n个整数，将这组整数逆置并输出。
int main(void)
{
	int arr[N],n;
	int i;
	scanf("%d",&n);
	printf("请输入n个整数（n <= 10）:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n/2; i++)
	{
		int t;
		t = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = t;
	}

	for (i = 0;i < n;i++)
	{
		printf("%d\n",arr[i]);
	}


	return 0;
}

//int main(void)
//{
//	int a[6];//0-5
//	int i;
//	double sum = 0;
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//
//	for (i = 0; i < 6; i++)
//		printf("%d\n", a[i]);
//	printf("%f\n",sum/6);
//	return 0;
//}
//#include<stdio.h>
//
//void fun1(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("%d,%d\n",x,y);
//}
//void fun2(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int x = 3, y = 4;
//	printf("原参数:%d,%d\n",x,y);
//	fun1(x,y);
//	printf("fun1():%d,%d\n",x,y);
//	fun2(&x,&y);
//	printf("fun2():%d,%d\n",x,y);
//	getchar();
//
//	return 0;
//}


//
//int main(void)
//{
//	char a = "linlongjun";
//	printf("%d\n",a);
//	int x = 12;
//	int* p = &x;
//	printf("p: %p\n",p); //%p打印地址 %d 打印p指向的值*p
//	printf("*p:%d\n",*p);
//	getchar();
//
//	return 0;
//}




//int main(void)
//{
//	////一维数组元素地址打印测试
//	//int arr[12] = { 1,2,3,4 };
//	//int i;
//	//for (i = 0; i < 12; i++)
//	//{
//	//	printf("%p\n",&arr[i]);
//	//}
//
//	//二维数组元素地址打印测试
//	int n, m,k,count = 1;
//	int douArr[3][4] = { { 1,2,3,4 }, { 5,6,7,8 }, {9,10,11,12} };
//	for (n = 0; n < 3; n++)
//	{
//		for (m = 0; m < 3; m++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 4; k++)
//		{
//			printf("%d",douArr[n][k]);
//		}
//		
//		printf("\n");
//	}
//
//	return 0;
//}
//int main(void)
//{
//	char arr[128];
//	printf("请输入字符：");
//	gets(arr);
//	printf("你输入的字符串为：%s\n",arr);
//
//	printf("请输入字符:");
//	scanf("%s",arr);
//	printf("你输入的字符串为:%s\n",arr);
//
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	char a[20], b[20];
//	puts("请输入字符串a:");
//	gets(a);
//	puts("请输入字符串b:");
//	gets(b);
//
//	int temp = strcmp(a, b);
//	if (temp == 0)
//		printf("这两个字符串相同\n");
//	else if (temp > 0)
//		printf("字符串a比b大");
//	else if (temp < 0)
//		printf("字符串a比b小");
//
//	return 0;
//}



//int main(void)
//{
//	char arr[128];
//	int i;
//	printf("请输入一段文字:");
//	scanf("%s", arr);
//	printf("%s\n", arr);
//	for (i = 0; i < 128; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	//测试字节长度用sizeof
//	char* string = "hello";
//	char array[1024];
//	printf("size = %ld\n",sizeof(array));
//	printf("size = %ld\n",sizeof(char *));
//	printf("size = %ld\n",sizeof(string));
//	
//	//测试字符串长度用 strlen
//	printf("size = %ld\n",strlen(string));
//	printf("size = %ld\n", strlen ("hello"));
//
//	return 0;
//}