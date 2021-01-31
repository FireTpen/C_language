/*请设计输出实数的格式，包括：⑴一行输出一个实数；
⑵一行内输出两个实数；⑶一行内输出三个实数。实数用"6.2f"格式输出。
输入
一个实数，float范围
输出
输出3行，第一行打印一遍输入的数，第二行打印两遍，
第三行打印三遍。 第二行和第三行，用空格分隔同一行的数字。
实数用"6.2f"格式输出。
样例输入
0.618
样例输出
  0.62
  0.62   0.62
  0.62   0.62   0.62
*/
#include<stdio.h>

int main(void)
{
	float n;
	scanf("%f", &n);

	printf("%6.2f\n",n);
	printf("%6.2f %6.2f\n",n,n);
	printf("%6.2f %6.2f %6.2f",n,n,n);
}