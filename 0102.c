#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int A, B, C, D; //分别表示ABCD是否是罪犯，如果是罪犯就=1，不是就=0.
	int LA, LB, LC, LD;//表示ABCD四个人所说的话是否是真话，真话=1，假话=0；

	for (A = 0; A <= 1; A++)
	{
		for (B = 0; B <= 1; B++)
		{
			for (C = 0; C <= 1; C++)
			{
				for (D = 0; D <= 1; D++)
				{
					LA = B || C || D;
					LB = !B && C;
					LC = (A + D == 1);
					LD = LB;
					if (LA + LB + LC + LD == 2 && A + B + C + D == 1)
					{
						if (LA)
						{
							printf("A说的是真话\n");
						}						
						if (LB)
						{
							printf("B说的是真话\n");
						}						
						if (LC)
						{
							printf("C说的是真话\n");
						}						
						if (LD)
						{
							printf("D说的是真话\n");
						}
						if(A)
						{
							printf("A是罪犯\n");
						}						
						else if(B)
						{
							printf("B是罪犯\n");
						}						
						else if(C)
						{
							printf("C是罪犯\n");
						}						
						else
						{
							printf("D是罪犯\n");
						}
					}
				}
			}
		}
	}
	
	return 0;
}

//4.14 求水仙花数
//int main()
//{
//	int ge,shi, bai;
//
//
//	for (int i = 100; i < 999; i++)
//	{
//		ge = i % 10;
//		shi = i / 10 % 10;
//		bai = i / 100 % 10;
//		if (i == (ge * ge * ge) + (shi * shi * shi) + (bai * bai * bai))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


//枚举法：找零钱问题
//int main(void)
//{
//	int x;
//	int ones, twos, fives;
//
//	scanf("%d",&x);
//	
//	for (ones = 1; ones < x * 10; ones++)
//	{
//		for (twos = 1; twos < x * 10 / 2; twos++)
//		{
//			for (fives = 1; fives < x * 10 / 5; fives++)
//			{
//				if(ones*1+twos*2+fives*5==x*10)
//				printf("1角%d枚，2角%d枚，5角%d枚\n",ones,twos,fives);
//			}
//		}
//	}
//	return 0;
//}
////4.12打印图形 
//int main(void)
//{
//	int n;
//	char ch;
//	printf("请输入行数和字符：");
//	scanf("%d %c",&n,&ch);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 2 * i - 1; j++)
//		{
//			if (i == 1 || i == n || j == 1 || j == 2 * i - 1)
//				printf("%c", ch);
//			else
//				printf(" ");
//		}
//			
//		printf("\n");
//
//	}
//	return 0;
//}
//// 4.11 :输出2-100之间的素数，每5个素数一行。
//int main(void)
//{
//	int m, i, n = 0;
//	for (m = 2; m <= 100; m++)  //2 - 100 的所有数
//	{
//
//			for (i = 2; i < m; i++)
//			{
//				if (m % i == 0)  //能对i整除的数都不要，跳出循环
//					break;
//				else             //打印出素数
//					printf("%3d", m);
//				n++; //计数器记录打印的个数
//				break;
//			}
//			if(n % 5 == 0) //当计数器的值能被5整除时，换行
//				printf("\n");			
//	}
//		return 0;
//}
////4.10 :判断整数m是否为素数
//int main()
//{
//	int m;
//	int isPrime = 1;
//	while (1)
//	{
//		printf("请输入一个整数：");
//		scanf("%d", &m);
//
//		if (m == 1 || m <= 0) isPrime = 0;
//		else
//			for (int i = 2; i < m; i++)
//			{
//				if (m % i == 0)
//				{
//					isPrime = 0;
//					break;
//				}
//			}
//		if (isPrime == 0)
//		{
//			printf("%d不是素数\n", m);
//			isPrime = 1;
//		}
//		else
//			printf("%d是素数\n", m);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1;/* i <= 100*/; i++)
//	{
//		if (i % 2 != 0)
//		{
//			continue;			
//		}
//		printf("偶数为：%d\n", i);
//	}
//	return 0;
//}



////4.8:分数求和： 1-1/2+1/3+......+(-1)^(n-1)/n
//int main()
//{
//	int n;
//	double sum, term, sign;
//	while (1)
//	{
//		printf("请输入n：");
//		scanf("%d", &n);
//		sum = 0;
//		sign = 1;
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			term = sign / i;
//			sign *= -1;
//			sum += term;
//		}
//		printf("%.5f\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int sum, i;
//
//	for (sum = 0, i = 1; i <= 100;)
//	{
//		sum += i;
//		i++;
//	}
//	//sum = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	sum += i;
//	//}
//	printf("sum=%d\n",sum);
//
//
//	return 0;
//
//}
//int main(void)
//{
//	int m, n;
//
//	printf("请输入一个不超过10位数的整数：");
//	scanf("%d", &m);
//	int t = m;
//	n = 0;
//
//	do
//	{
//		m /= 10;
//		n++;
//	} while (m);
//
//	printf("%d的位数为：%d位\n", t, n);
//	return 0;
//}

//int main(void)
//{
//	int m, n;
//
//	printf("请输入一个不超过10位数的整数：");
//	scanf("%d",&m);
//	int t = m;
//	n = 1;
//	m /= 10;
//	while (m != 0)
//	{
//		m /= 10;
//		n++;
//	}
//
//	printf("%d的位数为：%d位\n",t,n);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	printf("请输入两个整数:\n");
//	scanf("%d %d",&a,&b);
//	int m, n;
//	m = a;
//	n = b;
//	while (a % b != 0)
//	{
//		int r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d和%d的最大公约数为%d,最小公倍数为%d\n",m,n,b,m*n/b);
//
//	return 0;
//}
//int main(void)
//{
//	int n = 5;
//	while (n > 0)
//	{
//		printf("n = %2d\n",n);
//		n--;
//	}
//}


//#include<stdio.h>
//
//int main(void)
//{
//	int sum, i;
//
//	sum = 0;
//	i = 1;
//	L:
//	if (i <= 100)
//	{
//		sum += i;
//		i++;
//			goto L;
//	}
//	/*int sum;
//	int i = 1;*/
//	//for (sum = 1; i < 100; sum += i)
//	//{
//	//	i++;
//	//}
//	//while (i <= 100)
//	//{
//	//	sum += i;
//	//	i++;
//	//}
//
//	printf("1~100的整数和为：%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int score;
//	char grade;
//	printf("请输入学生成绩：\n");
//	scanf("%d",&score);
//
//	switch (score/10)
//	{
//	    case 10:
//	    case 9:
//			grade = 'A';
//			break;
//		case 8:
//			grade = 'B';
//			break;
//		case 7:
//			grade = 'C';
//			break;
//		case 6:
//			grade = 'D';
//			break;
//		default:
//			grade = 'E';
//			break;
//	}
//	printf("%d : %c\n",score,grade);
//	return 0;
//}