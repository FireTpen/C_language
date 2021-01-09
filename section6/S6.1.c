#include<stdio.h>
//例6-1输入一组学生的年龄（输入非正整数时结束），输出平均年龄，保留小数点后两位。

int main(void)
{
	int student_ages,student_num = 0;
	double average,ages_sum = 0;
	int age_arr[student_num];
	char end;
	
	while(1)
	{
		printf("请输入学生年龄：");
		scanf("%d",&student_ages);
		
		if(student_ages > 0 && student_ages < 100)
		{
		    age_arr[student_num] = student_ages;
			ages_sum += student_ages;
			student_num++;
		}
		else  break;

	}
	
	average = ages_sum / student_num;
	printf("%d个学生的平均年龄为：%.2f\n",student_num,average);
	int i,k;
	if(student_num > 0)
	{
		for(i = 0; i < student_num;i++)
		{
		if(age_arr[i] > average)
			k++;
		}
		printf("学生中大于年龄平均值的有%d个\n",k);
	}
	
	return 0;
}







/*
int main(void)
{
	int age,n;  //age是学生年龄，n是学生个数
	double sum = 0;
	n = 0;
	while(1)
	{
		printf("输入一个学生年龄：");
		scanf("%d",&age);
		if(age <= 0) break;
		sum += age;
		n++;
	}
	
	if(n > 0)
	{
		printf("%d个学生的平均年龄为：%.2f\n",n,sum/n);
	}
	 
	
	
	return 0;
}
*/