/*5.在第四题中，ref是那些数据的地址？ref+1呢？ ++ref指向什么？

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
*/

/*ref的地址为 ref[]的首地址，即ref[0]

ref+1就是 &ref[1]，就是第二个元素的指针。

++ref 指向下一个元素的地址
*/