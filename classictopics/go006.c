//6.从键盘上输入若干学生的一门课成绩，计算出平均分，当输入负数时结束输入。将结果输出。

#include<stdio.h>

int main(void)
{
	int digits = 0; //计数总共输入了几个学生的成绩
	float score = 0,score_sum = 0,score_average; //因为分数有可能为小数，用单精度浮点型float 定义变量，score分数；score_sum分数总和；score_average分数平均数
	
	printf("请输入学生成绩:\n");
	
	do 
	{
		digits++;// 输入成绩数量+1
		score_sum += score;//累加每次输入的分数求得总和
		scanf("%f",&score);//输入分数
	}while(score >= 0); //当输入结果为负数时结束输入
	
	score_average = score_sum/digits; //平均值=分数总和/成绩数量
	printf("学生成绩的平均数为:%f\n",score_average);
	
	return 0;
}
