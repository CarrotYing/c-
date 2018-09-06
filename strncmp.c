#include <stdio.h>
#include <stdlib.h>
#include<assert.h> 
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int my_strncmp(const char *s1,const char *s2,int count)
{
	assert(s1);
	assert(s2);
	while(count--)
	{
		if(*s1==*s2){
			s1++,s2++;
		}
		else return (*s1)>(*s2)?  1:-1;
	}
	return 0;
}
int main(int argc, char *argv[]) {
	char string1[] = "The quick brown dog jumps over the lazy fox";
	char string2[] = "The QUICK brown fox jumps over the lazy dog";
	char tmp[20];
   int result;
   printf( "Compare strings:\n\t\t%s\n\t\t%s\n\n", string1, string2 );
   printf( "Function:\tstrncmp (first 10 characters only)\n" );
   result = my_strncmp( string1, string2 , 10 );
   if( result > 0 )
      strcpy( tmp, "greater than" );
   else if( result < 0 )
      strcpy( tmp, "less than" );
   else
      strcpy( tmp, "equal to" );	
    printf( "Result:\t\tString 1 is %s string 2\n\n", tmp );

	return 0;
}
