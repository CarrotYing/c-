#include <stdio.h>
#include<assert.h>
#include <stdlib.h>
char *my_strncpy(char *dst,const char *src,int count)
{
	char *res=dst;
	assert(dst);//参数为假则结束并报错 
	assert(src);
	while(count--)
	{
		*res++=*src++;
	}
	return res;//函数的链式访问 
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   char string[100] = "Cats are nice usually";
   printf ( "Before: %s\n", string );
   my_strncpy( string, "Dogs", 4 );
   my_strncpy( string + 9, "mean", 4 );
   printf ( "After:  %s\n", string );
	return 0;
}
