#include<stdio.h>
/*1����дһ�����򣬴˳���Ҫ������һ��������Ȼ���ӡ���������ֵ(��)���������ֵ�� 10(��)����������
ֵ(�������� 5������� 5 �� 15)��Ҫ���ڸ������ֵ֮���ÿո��Ʊ�����߻��з��ֿ���*/
int main(void)
{
	int val,i;
	printf("please input number:");
	scanf("%d",&val);
	for(i = val;i <= val+10;i++)
	{
		printf("%d\t",i);	
	}
	return 0;
}