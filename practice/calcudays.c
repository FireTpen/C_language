/*4����дһ�����򣬴˳���Ҫ������������Ȼ�󽫸�ֵת��Ϊ���������������������� 18����Ҫ�������
18 days are 2 weeks, 4days.*/

#include<stdio.h>
int main(void)
{
	int days,i,count = 0;
	printf("please input days:");
	scanf("%d",&days);
	for(i=1;i<=days;i++)
	{
		if(i%7==0)
			count++;
	}
	printf("%ddays are %d weeks,%ddays\n",days,count,days%7);
	return 0;
}