#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int A, B, C, D; //�ֱ��ʾABCD�Ƿ����ﷸ��������ﷸ��=1�����Ǿ�=0.
	int LA, LB, LC, LD;//��ʾABCD�ĸ�����˵�Ļ��Ƿ����滰���滰=1���ٻ�=0��

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
							printf("A˵�����滰\n");
						}						
						if (LB)
						{
							printf("B˵�����滰\n");
						}						
						if (LC)
						{
							printf("C˵�����滰\n");
						}						
						if (LD)
						{
							printf("D˵�����滰\n");
						}
						if(A)
						{
							printf("A���ﷸ\n");
						}						
						else if(B)
						{
							printf("B���ﷸ\n");
						}						
						else if(C)
						{
							printf("C���ﷸ\n");
						}						
						else
						{
							printf("D���ﷸ\n");
						}
					}
				}
			}
		}
	}
	
	return 0;
}

//4.14 ��ˮ�ɻ���
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


//ö�ٷ�������Ǯ����
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
//				printf("1��%dö��2��%dö��5��%dö\n",ones,twos,fives);
//			}
//		}
//	}
//	return 0;
//}
////4.12��ӡͼ�� 
//int main(void)
//{
//	int n;
//	char ch;
//	printf("�������������ַ���");
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
//// 4.11 :���2-100֮���������ÿ5������һ�С�
//int main(void)
//{
//	int m, i, n = 0;
//	for (m = 2; m <= 100; m++)  //2 - 100 ��������
//	{
//
//			for (i = 2; i < m; i++)
//			{
//				if (m % i == 0)  //�ܶ�i������������Ҫ������ѭ��
//					break;
//				else             //��ӡ������
//					printf("%3d", m);
//				n++; //��������¼��ӡ�ĸ���
//				break;
//			}
//			if(n % 5 == 0) //����������ֵ�ܱ�5����ʱ������
//				printf("\n");			
//	}
//		return 0;
//}
////4.10 :�ж�����m�Ƿ�Ϊ����
//int main()
//{
//	int m;
//	int isPrime = 1;
//	while (1)
//	{
//		printf("������һ��������");
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
//			printf("%d��������\n", m);
//			isPrime = 1;
//		}
//		else
//			printf("%d������\n", m);
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
//		printf("ż��Ϊ��%d\n", i);
//	}
//	return 0;
//}



////4.8:������ͣ� 1-1/2+1/3+......+(-1)^(n-1)/n
//int main()
//{
//	int n;
//	double sum, term, sign;
//	while (1)
//	{
//		printf("������n��");
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
//	printf("������һ��������10λ����������");
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
//	printf("%d��λ��Ϊ��%dλ\n", t, n);
//	return 0;
//}

//int main(void)
//{
//	int m, n;
//
//	printf("������һ��������10λ����������");
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
//	printf("%d��λ��Ϊ��%dλ\n",t,n);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	printf("��������������:\n");
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
//	printf("%d��%d�����Լ��Ϊ%d,��С������Ϊ%d\n",m,n,b,m*n/b);
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
//	printf("1~100��������Ϊ��%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int score;
//	char grade;
//	printf("������ѧ���ɼ���\n");
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