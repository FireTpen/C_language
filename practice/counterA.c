/*2 、写出下面表达式运算后 a 的值，设原来 a=12。设 a 和 n 已定义为整型变量。
(1) a += a
(2) a -= 2
(3) a *= 2+3
(4) a /= a+a
(5) a %= (n%2)，n 的值为 5
(6) a += a -= a *= a
*/

#include<stdio.h>
int main(void)
{
	int x,n,a = 12;
	while(1)
	{
	printf("please input 1-6:");
	scanf("%d",&x);
		switch(x)
		{
			case 1:
			a += a;
			printf("a:%d\n",a);
			break;
			
			case 2:
			a -= 2;
			printf("a:%d\n",a);
			break;	
			
			case 3:
			a *= 2+3;
			printf("a:%d\n",a);
			break;
			
			case 4:
			a /= a+a;
			printf("a:%d\n",a);
			break;
			
			case 5:
			n = 5;
			a %= (n%2);
			printf("a:%d\n",a);
			break;
			
			case 6:
			a += a -= a *= a;
			printf("a:%d\n",a);
			break;
		}
	}


	return 0;
}