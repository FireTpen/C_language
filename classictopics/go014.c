/*14.打印以下图案：
      1
     121
    12321
   1234321
 */
 
 #include<stdio.h>
 
 int main(void)
 {
	 int line = 4,cur_line,space,num;
	 for(cur_line = 1;cur_line <= 4;cur_line++)
	 {
		 for(space = 4;space > cur_line;space--)
		 {
			 printf(" ");
		 }
		 
		 
		 for(num = 1;num <= cur_line;num++)
		 {
			 printf("%d",num);
		 } 
		 
		 
		 for(num = cur_line-1;num > 0;num--)
		 {
			 printf("%d",num);
		 }
		 
		 
		 printf("\n");	 
	 }
	  
	 return 0;
 }