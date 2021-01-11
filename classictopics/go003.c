//3.输入一个正整数求出它是几位数；输出原数和位数。
#include <stdio.h>

int main(void)
{
	int positive_integer,storage,digit = 0;//positive_integer正整数；storage保存原数；digit位数
	printf("请输入一个正整数:\n");
	scanf("%d",&positive_integer);//输入一个正整数
	
	storage = positive_integer; //保存一开始输入的正整数
	
	//输入的值不断除以10，每除一次记录位数+1，知道正整数的值为0，不再执行循环体，就可以知道输入的值为几位数
	while(positive_integer != 0) //如果正整数不等于0，执行以下循环体
	{
		digit++;  //位数+1
		positive_integer /= 10; //正整数= 正整数 / 10
		
	}
	printf("%d的位数为%d\n",storage,digit);

	
	return 0;
}