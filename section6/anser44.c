#include<stdio.h>
//编写一个程序，该程序读取输入直到遇到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目
int main(void)
{
	printf("请输入字符：");
	char ch;
	int space = 0;
	int newline = 0;
	int character = 0;
	while(1)
	{
		scanf("%c",&ch);
		if(ch == '#')
		{
			break;
		}
		else if(ch == ' ')
		{
			space++;
		}
		else if(ch == '\n')
		{
			newline++;
		}
		else 
		{
			character++;
		}
	}
	printf("空格符为:%d,换行符为:%d,其他符号为:%d\n",space,newline,character);
	
	return 0;
}
