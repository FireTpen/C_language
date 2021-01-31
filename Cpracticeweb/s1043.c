/*输入三个整数，按由小到大的顺序输出。
输入
三个整数
输出
由小到大输出成一行，每个数字后面跟一个空格
样例输入
2 3 1
样例输出
1 2 3 
*/

#include<stdio.h>

int main(void)
{
	int a, b, c, t;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b){ t = a; a = b; b = t; }
	if (a > c){ t = a; a = c; c = t; }
	if (b > c){	t = b; b = c; c = t; }
	printf("%d %d %d",a,b,c);
	return 0;
}