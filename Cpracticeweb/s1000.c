/*输入两个整数a和b，计算a+b的和

注意此题是多组测试数据

输入两个整数A和B

范围不超过2^10

求A+B

样例输入
1 1
10 20
样例输出
2
30
*/
#include<stdio.h>
int main()
{
    int a,b;
    while(~scanf("%d%d", &a, &b))printf("%d\n",a+b);
    return 0;
}