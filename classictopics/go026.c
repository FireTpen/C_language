#define _CRT_SECURE_NO_WARNINGS 1
/*26.有一篇文章，有三行文字，每行有80个字符。要求统计出其中英文大写字母
、小写字母、数字、空格以及其他字符的个数。*/

#include<stdio.h>
int main(void)
{
	int big = 0, small = 0, num = 0, space = 0, other = 0;
	int i,j;
	char text[3][80];

	for(i = 0; i < 3; i++)
	{
		printf("请输入第%d行文字：", i + 1);
		gets(text[i]);
		for(j = 0; j < 80&&text[i][j]!='\0'; j++)
		{
			if (text[i][j] >= 'A' && text[i][j] <= 'Z')
				big++;
			else if (text[i][j] >= 'a' && text[i][j] <= 'z')
				small++;
			else if (text[i][j] >= '0' && text[i][j] <= '9')
				num++;
			else if (text[i][j] == ' ')
				space++;
			else
				other++;
		}
	}
	printf("大写字母数：%d\n",big);
	printf("小写字母数：%d\n",small);
	printf("数字数：%d\n",num);
	printf("空格数：%d\n",big);
	printf("其他符号数：%d\n",other);

	return 0;
}
