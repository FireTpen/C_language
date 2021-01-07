#include<stdio.h>

#define WTMC 3.0e-23 
#define ONEQUART 950

int main(void)
{
	int quart;

	printf("请输入水的夸脱数：");
	scanf("%d",&quart);

	double quart_water_molecule =(quart*ONEQUART) / WTMC;
	printf("%d夸脱数的水有%lf个水分子\n",quart,quart_water_molecule);

	return 0;
}
