/*入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
输入
a b两个数
输出
a/b的余数
样例输入
3 2
样例输出
1
*/
#include<stdio.h>
#define CHANGE(a,b) a % b

int main(void)
{
	int a, b, t;
	scanf("%d%d",&a,&b);
	t =CHANGE(a, b);
	printf("%d",t);
	return 0;
}