/*13.打印以下图案：
  *******
   *******
    *******
     *******
	 */
	 
#include<stdio.h>

int main(void)
{
	int line = 4,cur_line,space,star;
	
	for(cur_line = 1;cur_line <= line;cur_line++) //当前行数
	{
		
		for(space = 1;space <= cur_line;space++) //空格数等于当前行数
		{
			printf(" ");
		}
		
		
		for(star = 1;star <= 7;star++) //每行打印七个星星
		{
			printf("*");
		}
		
		
		printf("\n");//换行
	}
	return 0;
}