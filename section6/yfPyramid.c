#include <stdio.h>
 //#include <stdlib.h>

 int main(void)
 {
	 int line;//行数
	 int i;
	
	 char letter,ch;
	 printf("请输入一个大写字母:");
	 scanf("%c",&letter);
	                       //4
	 for(line = 0;line <= letter-'A';line++)
	 {               //①4
		 for(i = 0;i < letter-'A'-line;i++)
			 printf(" ");
		
		 for(ch = 'A';ch <= ('A'+line);ch++)
			 printf("%c",ch);
		 ch -= 2;
		
		 while(ch != 'A'-1)
			 printf("%c",ch--);
		 printf("\n");
	 }

	 return 0;
}













































// /* 输入'E'得

        // A
	   // ABA
	  // ABCBA
	 // ABCDCBA
	// ABCDEDCBA
// */