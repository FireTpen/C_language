/*3����дһ�����򣬸ó���Ҫ������һ�� float ��������ӡ����������ֵ��ʹ�����Լ���Ƶĺ����������ֵ
���������ҽ�����������ӡ������main ��������������ֵ���ݸ��ú�����*/

#include<stdio.h>
float cube (float num);

int main(void)
{
	float num;
	printf("please input a float number:");
	scanf("%f",&num);
	
	printf("%f cube is :%f\n",num,cube(num));
	return 0;
}

float cube (float num)
{
	int cube_val;
	cube_val = num*num*num;
	return cube_val;
}