#define _CRT_SECURE_NO_WARNINGS 1
/*26.��һƪ���£����������֣�ÿ����80���ַ���Ҫ��ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ
��Сд��ĸ�����֡��ո��Լ������ַ��ĸ�����*/

#include<stdio.h>
int main(void)
{
	int big = 0, small = 0, num = 0, space = 0, other = 0;
	int i,j;
	char text[3][80];

	for(i = 0; i < 3; i++)
	{
		printf("�������%d�����֣�", i + 1);
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
	printf("��д��ĸ����%d\n",big);
	printf("Сд��ĸ����%d\n",small);
	printf("��������%d\n",num);
	printf("�ո�����%d\n",big);
	printf("������������%d\n",other);

	return 0;
}
