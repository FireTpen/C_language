/*9.打印以下图案： 
   
*
**
***
****

*/
#include<stdio.h>

int main(void)
{
	int input_line,line,star; //input_line输入行数；line当前行数；star星星数
	printf("请输入一个值：");
	scanf("%d",&input_line);
	
	for(line = 1;line <= input_line;line++) //
	{
		// for(space = 1;space <= input_line-line;space++) //当前行的空格数为 输入行数-当前行数
		// {
			// printf(" ");
		// }
		for(star = 1;star <= line ;star++) //当前行的星星数为 ：当前行数
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}