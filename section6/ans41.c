//97-122 1、编写一个程序，要求用相应的控制流语句往屏幕打印 26 个小写字母。
#include<stdio.h>
int main(void)
{
	int count;
	char letter;
	for(letter = 'a';letter <= 'z';letter++)
	{
		printf("%c\t",letter);
		count++;
		if(count % 5 == 0)
			printf("\n");
	}
	printf("\n");
	
	return 0;
}