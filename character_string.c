#include<stdio.h>
#include<string.h>
int main(void)
{
	//strcpy(字符串1，字符串2)，把字符串2复制到 字符串1当中（覆盖）
	char str1[20], str2[] = "hello";
	char str3[] = "world!";
	strcpy(str1,str2);
	printf("%s\n",str1);

	//strcat(字符串1，字符串2)，把字符串2连接到字符串1的末尾处
	strcat(str1, str3);
	printf("%s\n",str1);

	//strlen(字符串),返回字符串的长度
	printf("str1的长度为：%d\n",strlen(str1));

	/*strcmp(字符串1，字符串2),比较字符串的大小,
	* 字符串大小的比较规则是:以各个字符对应的 ASCII 码值进行比较

	strcmp() 从两个字符串的第 0 个字符开始比较，如果它们相等，就继续比较下一个字符，直到遇见不同的字符，或者到字符串的末尾。

	如果字符串1和字符串2相同，就返回0；

	如果字符串1大于字符串2，就返回返回大于 0 的值；

	如果字符串1小于字符串2，就返回返回小于 0 的值
	*/
	printf("str1和str2的比较结果:%d\n",strcmp(str1,str3));
	

	return 0;
}
