#include<stdio.h>
#include<string.h>
int main(void)
{   
    char ch1[100], ch2[100], ch3[100],temp[100];
    scanf("%s %s %s",ch1,ch2,ch3);
    if (strcmp(ch1, ch2) > 0)
    {
        strcpy(temp,ch1);
        strcpy(ch1,ch2);
        strcpy(ch2,temp);
    } 
    if (strcmp(ch1, ch3) > 0)
    {
        strcpy(temp,ch1);
        strcpy(ch1,ch3);
        strcpy(ch3,temp);
    }
    if (strcmp(ch2, ch3) > 0)
    {
        strcpy(temp, ch2);
        strcpy(ch2, ch3);
        strcpy(ch3, temp);
    } 
    printf("%s\n%s\n%s\n",ch1,ch2,ch3);

    return 0;
}