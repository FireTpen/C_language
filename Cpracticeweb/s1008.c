/*给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
输入
一个整数0－100以内
输出
一个字符，表示成绩等级
样例输入
90
样例输出
A

*/
#include<stdio.h>
int main()
{
	char ch;
	int score;
	scanf("%d",&score);
	if (score < 0 || score>100)
		perror("输入有误");
	if (score >= 90)
		ch = 'A';
	else if (score >= 80 && score < 90)
		ch = 'B';
	else if (score >= 70 && score < 80)
		ch = 'C';
	else if (score >= 60 && score < 70)
		ch = 'D';
	else
		ch = 'E';
	printf("%c\n",ch);

	return 0;
}