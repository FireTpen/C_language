/*给年份year，定义一个宏，以判别该年份是否闰年。
提示：宏名可以定义为LEAP_YEAR，形参为y，
既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
输入
一个年份
输出
根据是否闰年输出，是输出"L",否输出"N"
样例输入
2000
样例输出
L
*/
#include<stdio.h>
#include<math.h>

#define LEAP_YEAR(y) ((y%4==0&&y%100!=0)||(y%400==0))

int main(void)
{
	int y;
	scanf("%d",&y);
	if (LEAP_YEAR(y) == 0)
	{
		printf("N");
	}
	else
		printf("L");
}