//10.求下列试子的值：1-1/2+1/3-1/4+……+1/99-1/100，将结果输出。
/*
   思路：该式子为一个典型数列 1/n ,其中n为1~100， n为奇数时， 1/n - 1/n+1;  
                                                  n为偶数时， 1/n + 1/n+1;

*/
#include<stdio.h>

int main(void)
{
	int  n;
	double sum = 0.0; //定义一个double来接收小数点后的数
	for(n = 1;n <= 100;n++) //分母n是 1~100
	{
		
		if(n % 2 != 0) //分母对2取余，不等于零为奇数，
		{
			sum += 1.0/n;//根据题目可知奇数为正数，sum + 1/n
			
		}
		else
		{
			sum -= 1.0/n;//根据题目偶数为负数， sum - 1/n
		}
	}
	printf("输出结果为%.6lf\n",sum);
	
	return 0;
}