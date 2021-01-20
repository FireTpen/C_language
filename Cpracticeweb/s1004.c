/*有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？(递归)

输入
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。

输出
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。

样例输入
2
4
5
0
样例输出
2
4
6*/
#include<stdio.h>

int fun(int m)
{
	if (m == 1)
		return 1;
	else if (m == 2)
		return 2;
	else if (m == 3)
		return 3;
	else if (m == 4)
		return 4;
	else
		return fun(m - 1) + fun(m - 3);
}

int main(void)
{
	
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 1 && n <= 4)
			printf("%d\n", n);
		else if (n > 4)
			printf("%d\n",fun(n));
	}
	return 0;
}