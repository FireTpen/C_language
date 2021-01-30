/*输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
输入
一行字符
输出
加密处理后的字符
样例输入
a b
样例输出
b c
*/

#include<stdio.h>

int main(void)
{
	char ch[100];
	int i = 0;
	gets(ch);
	while (*ch)
	{
		if (ch[i] >= 'a' && ch[i] < 'z')
		{
			ch[i]++;
		}
		else if (ch[i] == 'z')
			ch[i] = 'a';
		
		if (ch[i] == '\0')
			break;
		i++;
	}
	puts(ch);
	return 0;
}
