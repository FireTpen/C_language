//5、分析并解释以下程序的执行结果。
#include <stdio.h>
int main(void)
{
int a,b,c,d;
a=10;
b=a++;   //先赋值10给b a再自增
c=++a;   //a==11 先自增 a==12 然后赋值在C
d=10*a++;//a先*10==120给d,然后再进行自增， * 优先级 大于++
printf("b,c,d:%d,%d,%d\n",b,c,d); //b:10,c:12,d:120
return 0;
}