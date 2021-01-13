/*2.编写一个函数，返回一个double型数组中最大和最小值的差值，并在一个简单的程序中测试这个函数*/

#include<stdio.h>

int main(void)
{
	double arr[5] = {18,22,15,34,23};
	double dif = differ(arr);
	printf("数组中最大值和最小值的差为：%.2lf\n",dif);
	return 0;
}

double differ(double* arr)
{
	int i,max = arr[0],min = arr[0];
	for(i = 0;i<5;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		else if(arr[i] < min)
		{
			min = arr[i];
		}	
	}
	
	return max - min;
}