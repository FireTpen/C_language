/*求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。
An = a1+q^n-1
输入
n

输出
Sn的值

样例输入
5
样例输出
24690
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i, a = 2, Sn = 0,An = 2;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		Sn += An;
		An += a * pow(10, i);
	}
	printf("%d\n",Sn);
	return 0;
}