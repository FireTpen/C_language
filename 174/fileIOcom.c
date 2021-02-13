#include<stdio.h>
/*
1、先声明一个结构体表示商品信息
2、以读写的方式打开一个文件
3、将输入的每条信息储存到一个结构变量中，用格式化写函数fprintf
4、fscanf函数从文件中读取每条信息，存储到结构变量中并显示
到屏幕上并统计商品的总价
*/

/*声明一个结构体表示商品信息有序号、名称、价格和数量*/
typedef struct Rec
{
	char id[10];
	char name[20];
	double price;
	int count;
}Rec;

/*定义一个写入函数，传入文件指针fp和商品数量*/
void WriteFile(FILE* fp, int commodityTypeQuantity)
{
	Rec record;/*定义一个结构体变量record记录商品信息*/
	int i;
	printf("*****************请输入商品数据*****************\n");
	for (i = 0; i < commodityTypeQuantity; i++)
	{
		printf("请输入序号：");
		scanf("%s", record.id);
		printf("请输入名称：");
		scanf("%s", record.name);
		printf("请输入价格：");
		scanf("%lf", &record.price);
		printf("请输入数量：");
		scanf("%d", &record.count);

		fprintf(fp, "%s %s %5.2lf %d\n", record.id, record.name, record.price, record.count);
	}
}

/*定义一个读取函数，传入文件指针fp和商品数量*/
void ReadFile(FILE* fp, int commodityTypeQuantity)
{
	Rec record;
	double total = 0;
	rewind(fp);
	while (fscanf(fp, "%s %s %lf %d", record.id, record.name, &record.price, &record.count) != EOF)
	{
		printf("%s %s %5.2lf %d\n", record.id, record.name, record.price, record.count);

		total += record.price * record.count;
	}

	printf("合计：%5.2lf\n", total);
}

int main(void)
{
	char filename[20];
	int commodityTypeQuantity;
	FILE* fp;
	
	printf("请输入目标文件：\n");
	scanf("%s", filename);
	
	fp = fopen(filename, "w+");
	if (fp == NULL)
	{
		printf("打开文件失败!");
		return 0;
	}
	
	printf("请输入商品数量：");
	scanf("%d", &commodityTypeQuantity);
	
	WriteFile(fp, commodityTypeQuantity);
	ReadFile(fp, commodityTypeQuantity);

	fclose(fp);

	return 0;
}