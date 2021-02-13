#include<stdio.h>
void WriteFile(FILE *fp)
{
	char ch;
	printf("请输入文件内容，以#结束!\n");

	while ((ch = getchar()) != '#')
	{
		/*fputc：fputc 函数用于将一个字符写入到指定的文件中并推进文件的位置指示器*/
		fputc(ch, fp);
	}

	rewind(fp);
}

void ReadFile(FILE* fp)
{
	char ch;
	printf("读取文件内容\n");
	/*用来指示接下来要读写的下一个字符的位置*/
	ch = fgetc(fp);
	
	/*只要没到文件的末尾，就一直循环输出文件内容*/
	while (ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n文件读取结束");
}


int main(void)
{
	FILE *fp; //定义一个文件指针
	char inputFile[30]; /*定义一个字符数组用于存放输入的文件名*/
	printf("请输入文件名：");
	scanf("%s",inputFile);
	
	/*文件指针fp以可读可写的方式打开文件*/
	fp = fopen(inputFile, "w+");
	
	/*判断指针fp是否为空，若为空则没有指向任何文件，打开失败*/
	if (fp == NULL)
	{
		printf("文件打开失败！");
		return 0;
	}
	printf("%s 打开成功\n",inputFile);
	
	/*写入字符内容到文件中去*/
	WriteFile(fp);
	
	/*读取文件中的字符内容*/
	ReadFile(fp);
	
	/*关闭文件*/
	fclose(fp);
	return 0;
}