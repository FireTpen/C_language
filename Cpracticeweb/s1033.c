/*写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
输入
一行字符串
输出
顺序输出其中的元音字母（aeiou）
样例输入
abcde
样例输出
ae
*/
#include<stdio.h>
#include<string.h>

void vowel(char* ch1,char* ch2)
{
	int i, j = 0,k,l;
	char temp;
	k = strlen(ch1);
	for (i = 0; i < k; i++)
	{
		if (ch1[i] == 'a' || ch1[i] == 'e' || ch1[i] == 'i' || ch1[i] == 'o' || ch1[i] == 'u')
		{
			ch2[j] = ch1[i];
			j++;
		}
	}
	ch2[j] = '\0';
	l = strlen(ch2);
	for (i = 0; i < l; i++)
	{
		for (j = i; j < l; j++)
		{
			if (ch2[i] > ch2[j])
			{
				temp = ch2[i];
				ch2[i] = ch2[j];
				ch2[j] = temp;
			}
		}
	}
	printf("%s",ch2);
}
int main(void)
{
	char ch1[20];
	char ch2[20] = {0};

	scanf("%s",ch1);

	vowel(ch1,ch2);

	return 0;
}