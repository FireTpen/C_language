/*16.编写一个统计学生成绩程序，完成以下功能：输入4个学生的2门课成绩；求出全班的总平均分，将结果输出。输出结果如下。
ｉｎｐｕｔ scores of student1:
name:Tony 
score 1:88
score 2:76
ｉｎｐｕｔ scores of student2:
name:GOGO 
score 1:95
score 2:92
ｉｎｐｕｔ scores of student3:
name:jack
score 1:59
score 2:78
ｉｎｐｕｔ scores of student4:
name:TOm
score 1:99
score 2:43
   Name    score1   score2   average
   Tony    88.00    76.00      82.00
   GOGO    95.00    92.00      93.50
   jack    59.00    78.00      68.50
    TOm    99.00    43.00      71.00
average=78.75
*/

#include<stdio.h>

#define N 4
int main(void)
{
	char name [4][20];	
	int student_num,sum_t = 0;
	int course;
	double arr_ave[N]= {0};
	double sum = 0, average = 0;
	double score[4][2] = {0};
	double score_input;
	
	for(student_num = 1;student_num <= N;student_num++ )
	{
		
		printf("Input scores of student%d:\n",student_num);
		printf("name:");
		scanf("%s",name[student_num-1]);
		for(course = 1;course <= 2;course++)
		{
			
			printf("score %d :",course);
			scanf("%lf",&score_input);
			score[student_num-1][course-1] = score_input;
			sum += score_input;	
          	
			sum_t += score_input;
		}
		
		arr_ave[student_num-1] = sum_t/2;
		sum_t = 0;	
	}	
	
	int i,j,k;
	
	printf("Name\tscore1\tscore2\taverage\n");
	for(i = 0;i < N;i++)
	{
		printf("%s\t",name[i]);
		for(j = 0;j < 2;j++)
		{
		printf("%.2lf\t",score[i][j]);
		}
		
		printf("%.2lf",arr_ave[i]);
	
		printf("\n");
	}
	
	printf("average = %.2lf\n",sum / (N*2));
	
	return 0;
}
