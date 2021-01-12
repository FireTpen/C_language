/*15. 打印以下图案：
   1234321
    12321
     121
      1
	  
	  */
//思路：第一行4个数 第二号3个数  4 3 2 1

#include<stdio.h>

int main(void)
{
	int line = 4,cur_line,space,num,digit1,digit2;
	digit1 = 4;
	digit2 = 3;
	
	for(cur_line = 1;cur_line <= line;cur_line++)
	{
		for(space = 1;space <cur_line;space++)
		{
			printf(" ");
		}
		
		
		for(num = 1;num <= digit1;num++)
		{	
			printf("%d",num);
		}
		digit1--;
		
		
		for(num = digit2; num > 0;num--)
		{
			printf("%d",num);
		}
		digit2--;
		
		
		printf("\n");
	}
	return 0;
}