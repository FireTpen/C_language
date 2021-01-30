/*定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
输入
两个数，空格隔开
输出
交换后的两个数，空格隔开
样例输入
1 2
样例输出
2 1
*/
#include<stdio.h>
#define CHANGE(a,b) t=a,a=b,b=t

int main(void)
{
	int a, b, t;
	scanf("%d%d",&a,&b);
	CHANGE(a, b);
	printf("%d %d",a,b);
	return 0;
}