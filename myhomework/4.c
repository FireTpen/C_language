/*
4.下面的程序将打印出什么？解释原因
*/

#include<stdio.h>

int main(void)
{
	int ref[] ={8,4,0,2};
	int *ptr;
	int index;
	for(index = 0,ptr = ref;index < 4;index++,ptr++)
	printf("%d %d\n",ref[index],*ptr);

	return 0;
}

/*
输入如下：
8 8
4 4
0 0
2 2

说明了 ：*(ptr+index)==ref[index]

*/