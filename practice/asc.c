#include<stdio.h>

int main(void)
{
	short ch;
	int ret1,ret2;
	
	while(1)
	{
		printf("请输入一个ASCII码值:");
		scanf("%hd",&ch);
		ret1 = ch;
		ret2 = getchar();

		if(ret1 != 1 || ret2 != '\n'|| ch > 127 || ch < 0)
			while(getchar() != '\n');

		printf("输入有误\n");
	}
	printf("该ASCII码值字符%hd是'%c'\n",ch,(char)ch);


	return 0;
}



/*  //我写的代码
int main()
{
	int asc;
	while(1)
	{
	    printf("请输入一个ASCII码值：");
	    scanf("%d",&asc);
      	    printf("ASCII码%d对应的字符为：'%c'\n",asc,asc);
	}
	return 0;
}
*/
/*此代码不作任何错误检测，输入范围超过ASCII码值时或者输入的不是数字，程序就不能正常运行
int main(void)
{
	char ch;
	while(1)
	{

	scanf("%hhd",&ch);
	printf("%c\n",ch);
	}
	return 0;
}
*/

