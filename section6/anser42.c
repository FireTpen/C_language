#include<stdio.h>

int main(void)
{
	float f,celsius;
	int upper,lower,step;
	
	printf(" fahr\tcelsius\n");

	lower = 0;
	upper = 300;
	step = 20;
	f =lower;
	
	while(f <= upper)
	{
		celsius = (5.0/9.0)*(f-32.0);
		printf("%.2f\t%6.2f\n",f,celsius);
		f = f + step;
	}
	return 0;
}