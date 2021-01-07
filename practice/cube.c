/*3、编写一个程序，该程序要求输入一个 float 型数并打印概述的立方值。使用你自己设计的函数来计算该值
的立方并且将它的立方打印出来。main 函数负责把输入的值传递给该函数。*/

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