//求1!+2!+3!+……+20!，将结果输出。
#include<stdio.h>

int main(void)
{
	int num1,num2;//num1为1~20，num2为1!~20!
	
	long sum = 0,factorial; //阶乘的和sum和阶乘要用长整形（数值太大）
	
	for(num1 = 1;num1 <= 20;num1++) //从1~20
	{
		factorial=1; //1的阶乘为 1
		
		for(num2 = 1;num2 <= num1;num2++) //1!~20!
		{
			factorial = factorial * num2; //例如 5！=1*2*3*4*5， 当num2=1时，factorial = 1 * 1 =1；当num2=2时，factorial=1*2=2，当num2=3时，factorial=2*3,以此类推 
		}
		sum += factorial; // sum = sum + factorial
	}
	printf("%ld\n",sum);
	
	return 0;
}



// #include<stdio.h>

// int main()

// {
	// int i,j;

	// long sum,k;

	// sum=0;

	// for(i=1;i<=20;i++)
	// {    
		// k=1;
		
		// for(j=1;j<=i;j++)
		// {
			// k=k*j;
		// }

		// sum=sum+k;
	// }

	// printf("1+2!+3!+…+20！=%ld",sum);//2561327494111820313

// }