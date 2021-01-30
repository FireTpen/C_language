/*分别用函数和带参的宏，从三个数中找出最大的数。
输入
3个实数
输出
最大的数,输出两遍，先用函数，再用宏。 保留3位小数。
样例输入
1 2 3
样例输出
3.000
3.000
*/

#include<stdio.h>

#define MAX(a,b,c) (a>b?a:b)>c?(a>b?a:b):c

float Max(float a, float b, float c)
{
	return (a > b ? a : b) > c ? (a > b ? a : b) : c;
}
int main(void)
{
	float a, b, c,max1,max2;
	scanf("%f%f%f",&a,&b,&c);
	max1 = MAX(a,b,c);
	max2 = Max(a, b, c);
	printf("%.3f\n",max1);
	printf("%.3f\n",max2);
	return 0;
}
