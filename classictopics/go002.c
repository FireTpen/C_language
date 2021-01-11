//2.输入一行字符，分别统计出其中字母、空格、数字和其他字符的个数。
#include <stdio.h>

int main(void)
{
	char ch; //定义要输入的字符变量
	int letter = 0,space = 0,number = 0,other = 0;//定义计数器
	printf("请输入一行字符:");
	
	while((ch = getchar())!= '\n')//输入遇到‘\n’结束循环
	{
		
		if((ch >= 'a'&& ch <= 'z')|| (ch >= 'A'&& ch <= 'Z')) //输入的值为'a'~'z'（ASCII码的值）范围内或者 'A'~'Z'（ASCII码的值）范围内
		{
			letter++; //字母数量+1
		}
		else if(ch >= '0' && ch <= '9') //输入的值为0~9
		{
			number++; //数字数量+1
		}
		else if(ch == ' ') //输入空格
		{
			space++; //空格数+1
		}
		else      //输入除了以上三个条件的其他字符
			other++; //其他字符数+1

	}
	
	printf("字母数：%d\n空格数:%d\n数字数：%d\n其他字符数:%d\n",letter,space,number,other);
	
	return 0;
}
