//5.从键盘上输入若干学生的一门课成绩，统计并输出最高成绩和最低成绩及相应的序号，当输入负数时结束输入
#include<stdio.h>
#define N 100
int main(void)
{
	int arr[N] = {0}; //定义数组初始化
	int i,j,max,min,num_max,num_min,digit;
	/*i,j用于遍历数组求最大最小值；max，min为最大值和最小值；num_max和num_min为最大值序号和最小值序号；digit记录输入了几个数值*/
	for(digit = 0;digit < N;digit++)
	{
		scanf("%d",&arr[digit]);	
		if(arr[digit]<0)               //遇到负数时结束输入，此时的digit为输入数值总个数-1（因为digit从0开始）；
			break;
	}
	
	max = arr[0];        //最大值和最小值初始化为arr[0]
	min = arr[0];
	
	for(i =0;i<digit;i++) //遍历数组 
	{
		if(arr[i] > max) //如果元素大于最大值，则替换最大值
		{
			max = arr[i]; 
			num_max = i+1;//将当前最大值的下标 赋值给num_max保存起来
		}
	}
	
	for(j =0;j<digit;j++)//遍历数组
	{
		if(arr[j] < min)//如果元素小于最小值，则替换最小值
		{
			min = arr[j];
			num_min = j+1;//将当前最小值的下标，赋值给num_min保存起来
		}
	}
	
	printf("成绩最高是%d号%d分\n成绩最低是%d号%d分\n",num_max,max,num_min,min);

	
	return 0;
}

