/*
* 打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，
其各位数字立方和等于该本身。 例如：153是一个水
仙花数，因为153=1^3+5^3+3^3。
*/
#include<stdio.h>
int main()
{
	int ge,shi,bai,i;

	for (i = 100; i <= 999; i++)
	{
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100 % 10;
		if (i == (ge * ge * ge) + (shi * shi * shi) + (bai * bai * bai))
			printf("%d\n",i);
	}

	return 0;
}