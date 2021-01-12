//12.求Sn=a+aa+aaa+…+aa…a之值，n,a由键盘输入。
/*思路：①n决定了该数列有多少项
        ②表面上这题是一道等差数列，实质上是一道等比数列，
		③等比数列通项公式为 an = a1*q^n-1
		④将每一项的等比数列相加求和可得Sn
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
	int n,a,i,q,Sn = 0,An = 0;
	printf("输入n和a的值:\n");
	scanf("%d %d",&n,&a);
	q = a; // 公比
	
	for(i = 1;i <= n;i++)
	{
		int qn = pow(q,i-1); //pow函数 == q^n-1
		
		An = a * qn; // an = a1*q^n-1
		
		Sn += An; //Sn=a+aa+aaa+…+aa…a
	}
	
	printf("Sn = %d\n",Sn);
	
	return 0;
}