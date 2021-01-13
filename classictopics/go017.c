/*17. 打印以下图案：
    *****
     *****
      *****
       *****
        *****
*/

#include<stdio.h>

int main(void)
{
	int line = 5;
	int cur_line,space,star;
	
	for(cur_line = 1;cur_line <= line;cur_line++)
	{
		for(space = 0;space < cur_line;space++)
		{
			printf(" ");
		}
		for(star = 0;star < line;star ++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}