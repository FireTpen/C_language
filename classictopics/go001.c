//1.输入两个正整数，m和n，求其最大公约数和最小公倍数
#include<stdio.h>

int gcd(int x,int y); //函数gcd调用声明
int lcm(int x,int y);//函数lcm调用声明

int main(void)
{
	int num1,num2,result_gcd,result_lcm;//num1和num2位两个输入值；result_gcd和result_lcm为函数gcd和lcm的计算结果；

	printf("请输入两个正整数:\n");
	scanf("%d %d",&num1,&num2);
	
	result_gcd = gcd(num1,num2); //函数gcd调用
	result_lcm = lcm(num1,num2); //函数lcm调用
	printf("%d和%d的最大公约数为：%d\n",num1,num2,result_gcd);printf("%d和%d的最小公倍数为：%d\n",num1,num2,result_lcm);
	
	return 0;
}

int gcd(int x,int y) //最大公约数 为gcd(a,b)=r,r是余数
{                    //a % b == r,b % r == r1,r % r1 == r2 直至余数等于零,最后的被除数就是最大公约数
	int r,temp = 0;  
	if(x < y)        //如果a < b,将a,b位置互换，让大的数对小的数取余
	{                
		temp = x;
		x = y;
		y = temp;
	}
	if(x == y)       //如果a == b , 他们本身就是最大公约数
	{
		return x;
	}
	
	while(r != 0)    //如果余数r等于0，则返回最大公约数
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int lcm(int x,int y)//最小公倍数为 a*b/gcd(a,b)
{
	return (x*y)/gcd(x,y);
}