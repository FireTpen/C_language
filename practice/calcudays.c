/*4、编写一个程序，此程序要求输入天数，然后将该值转换为星期数和天数。例如输入 18，则要求输出：
18 days are 2 weeks, 4days.*/

#include<stdio.h>
int main(void)
{
	int days,i,count = 0;
	printf("please input days:");
	scanf("%d",&days);
	for(i=1;i<=days;i++)
	{
		if(i%7==0)
			count++;
	}
	printf("%ddays are %d weeks,%ddays\n",days,count,days%7);
	return 0;
}