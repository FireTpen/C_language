
#include<stdio.h>

int main(void)
{
	int num,i,j,remainder, min_x=1; //min_x 取大于0的数都可以
	
	
	printf("请输入一个数:");
	scanf("%d",&num);
	
	for(i = 2;i <= num;i++)    //遍历2~num内所有整数
	{
		for(j = 2; j <= i-1;j++) //遍历2~(i-1)范围内所有整数，也就是对当前被检测的值前面所有的数进行取余即是：i % j
		{
			remainder = i % j; 
			if(min_x > remainder)//如果r = 0，min_x =0,就不是素数，因此不满足下面min_x>0的条件，不打印
			{
				min_x = remainder;
			}
		}
		if(min_x > 0) //满足min_x > 0 的为素数，打印在屏幕上
		{
			printf("%d\n",i);
		}
		min_x = 1;//min_x相当于一个检测工具，检测被测值对被测值-1的数进行取余且余数不等于0（即是min_x不能>remainder）
	}
	
	return 0;
}