#define _CRT_SECURE_NO_WARNINGS 1

//18.�����ꡢ�¡��գ���������Ǹ���ĵڼ��졣

#include<stdio.h>

int day_output(int* m, int mon, int day);
int leap(int y);

int main(void)
{
	int year,month,day,day_sum = 0;
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	L:
	printf("��������,��,�գ�");
	scanf("%d%d%d", &year, &month, &day);

	if(year < 0 || month > 12 || month < 0 || day > 31 ||day < 0 )
	{
		printf("����������������������\n");
		goto L;
	}

	months[1] = leap(year);

	day_sum = day_output(months,month,day);
	printf("������%d��%d��%d��,�ǽ���ĵ�%d��\n",year,month,day,day_sum);

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