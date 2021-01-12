//打印出100～999之间的所有水仙花数

#include<stdio.h>

int main(void)

{
	int num,one,ten,hundred;
	for(num = 100;num <= 999;num++)
	{
		one = num % 10;         //个，十，百位取余，取出各位数
		ten = num /10 %10;
		hundred = num /100 %10;
		//个位的立方+十位的立方+百位的立方等于水仙花数
		if(num == one*one*one+ten*ten*ten+hundred*hundred*hundred)
			printf("100~999之间水仙花数有：%d\n",num);
	}
	
	return 0;
}

/*拓展
一位自幂数：独身数
两位自幂数：没有
三位自幂数：水仙花数
四位自幂数：四叶玫瑰数
五位自幂数：五角星数
六位自幂数：六合数
七位自幂数：北斗七星数
八位自幂数：八仙数
九位自幂数：九九重阳数
十位自幂数：十全十美数
*/