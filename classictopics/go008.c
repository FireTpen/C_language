/*8.打印以下图案：     *
                      ***
                     *****
                    *******   2*当前行数-1
*/

#include<stdio.h>

int main(void)
{
	int input_line,line,space,star; //input_line输入行数；line当前行数；space空格数；star星星数
	printf("请输入一个值：");
	scanf("%d",&input_line);
	
	for(line = 1;line <= input_line;line++) //
	{
		for(space = 1;space <= input_line-line;space++) //当前行的空格数为 输入行数-当前行数
		{
			printf(" ");
		}
		for(star = 1;star <= 2*line-1;star++) //当前行的星星数为 ：2*当前行数-1
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}