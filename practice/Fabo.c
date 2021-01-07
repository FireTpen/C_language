#include<stdio.h>

int main()
{
	int Fabo[20] = {1,1};
	int i;
	for(i = 2;i < 20;i++)
	{
		Fabo[i]=Fabo[i-1]+Fabo[i-2];
	}
	
	for(i=0;i<20;i++)
	{
		printf("%d\t",Fabo[i]);
	}
	printf("\n");

	return 0;
}
