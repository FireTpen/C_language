//4.输入一个正整数，输出原数并逆序打印出各位数字。
/*
思路:①对输入的整数统计位数
②取出每一位的数值
③最低位*10最高位次方，次低位*10最高位-1次方


*/
#include<stdio.h>

int digit(int x);//digit函数调用声明；
int set(int x); //set函数调用声明；

int main(void)
{
	int m,n,storage; //m为输入正整数；n为该正整数值有多少位数
	
	printf("请输入一个数:"); //
	scanf("%d",&m); //输入一个正整数
	
	storage = m; //存储一开始输入的正整数
	n = digit(m);//digit函数的调用
	printf("一共%d位数\n",n);
	printf("%d\n",storage);

	set(m);
	printf("\n");
	
	return 0;

}

int digit(int x)  //这个函数用来求输入数值的位数；  int x 为形式参数 主函数main中 n=digit(m)中 m的值 传给 x ，即是 x = m;
{
	int dig = 0; //记录位数
	while(x != 0) //如果 x不等于0 ，执行循环体（和经典例题3同理）
	{
		dig++;
		x /= 10;	
	}
	return dig;  //返回位数dig，返回值传给主函数main中的 digit(m) ,即是 digit(m) = dig
}

int set(int x) //这个函数用来将数值颠倒例如  123 颠倒为 321
{
	while(x)  //while函数 （）内的值为非0则 无限循环，值为0则结束循环
	{
		printf("%d",x%10); //对整数取余后直接先输出，循环至x = 0后，刚好最高位和最低位颠倒
		x /= 10; //上边每取余打印后整数除10往前挪一位，例如 123/10 → 12 ，12/10 → 1 (因为int类型小数点后的数直接省略)
	}
	
}