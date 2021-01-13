/*
假设有如下声明：
float apple[10], apple_tree[10][5], *pf,weight = 2.2;
int i = 3;
则下列语句中哪些是正确的，哪些是错误的？原因是什么？
a. apple[2] = weight;

b. scanf("%f", &apple);

c. apple = weight;

d. printf ("%f", apple[3]);  正确

e. apple_tree[4][4] = apple[3];

f. apple_tree[5] = apple;

g. pf = weight;

h. pf = apple;

*/

a. 正确。可以直接赋值给数组的其中一项元素
b. 错误，apple不是float变量，不需要加&
c. 错误，apple不是float变量，不能直接赋值；
d. 正确。可以直接打印数组的某一项元素。
e. 正确。apple[3]的值赋值给apple_tree[4][4].
f. 错误，不能直接使用数值赋值
g. 错误，weight不是一个地址，应该为 pf = &weight.
h. 正确，数组本身就指向地址，所以不用&符号。

