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
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ��: %d\n", num2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line <= 5000)
//	{
//		printf("��ҪŬ���ô��룺%d\n", line);
//		line++;
//	}
//	if (line >= 5000)
//		printf("Ӯȡ�׸���\n");
//	return 0;
//
//}





//#include<stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô�����(ѡ��1 or 0):> ");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����кõ�offer\n");
//	}
//	else {
//		printf("�������ؼ�������\n");
//	}
//
//	return 0;
//}