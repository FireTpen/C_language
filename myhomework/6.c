/*
下面每种情况中*ptr和*（ptr+2）的值分别是什么？
a.
int *ptr;
int torf[2] [2] = {12, 14, 16};
ptr = torf[0];

b.
int * ptr;
int fort[2] [2] = { {12}, {14, 16} };
ptr = fort[0];

*/ 
 
   
#include<stdio.h>

int main(void)
{
	int torf[2][2] = {12,14,16};
	//int torf[2][2] = {{12},{14,16}};
	int* ptr;
	ptr = torf[0];

	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+2));

	return 0;
}

/*输出如下
a) *ptr = 12;
   *(ptr + 2) = 16;

b) *ptr = 12;
   *(ptr + 2) = 14;
*/