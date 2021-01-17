#define _CRT_SECURE_NO_WARNINGS 1

//18.给出年、月、日，计算该日是该年的第几天。

#include<stdio.h>

int day_output(int* m, int mon, int day);
int leap(int y);

int main(void)
{
	int year,month,day,day_sum = 0;
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	L:
	printf("请输入年,月,日：");
	scanf("%d%d%d", &year, &month, &day);

	if(year < 0 || month > 12 || month < 0 || day > 31 ||day < 0 )
	{
		printf("您的输入有误，请重新输入\n");
		goto L;
	}

	months[1] = leap(year);

	day_sum = day_output(months,month,day);
	printf("今天是%d年%d月%d日,是今年的第%d天\n",year,month,day,day_sum);

	return 0;
}

int day_output(int* m,int mon,int day)
{
	int month,day_sum = 0;

	for(month = 1;month < mon;month++)
	{
		day_sum += m[month];
	}

	return day_sum + day;
}

int leap(int y)
{
	int Feb;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		Feb = 29;
	}
	else
	{
		Feb = 28;
	}

	return Feb;
}