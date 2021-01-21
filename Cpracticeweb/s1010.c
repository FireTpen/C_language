/*企业发放的奖金根据利润提成。利润低于或等于100000元的，奖金可提10%;
利润高于100000元，低于200000元（100000<I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
400000<I≤600000元时，高于400000元的部分按3％提成；

600000<I≤1000000时，高于600000元的部分按1.5%提成；
I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。

输入
一个整数，当月利润。

输出
一个整数，奖金。

样例输入
900
样例输出
90
*/
#include<stdio.h>
#define M 100000
int main()
{
	long profit, bonus;
	int place;
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;

	scanf("%ld",&profit);
	
	if (profit > M && profit < 10 * M)
	{
		place = profit / M;
		if (profit / M == 0)
		{
			place -= 1;
		}
	}

	else if (profit <= M)
	{
		bonus = profit * 0.1;
		printf("%ld",bonus);
		return 0;
	}
	else
	{
		x5 = (profit - 10 * M) * 0.01;
	}
	switch (place)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			x1 = (profit - 6 * M)*0.015;
		case 5:
		case 4:
			x2 = (profit - 4 * M) * 0.03;
		case 3:
		case 2:
			x3 = (profit - 2 * M) * 0.05;
		case 1:
			x4 = (profit - M)*0.075+M*0.1;
	}
	bonus = x5 + x4 + x3 + x2 + x1;
	printf("%ld",bonus);

	return 0;
}