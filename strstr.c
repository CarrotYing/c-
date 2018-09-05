#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str,const char* sub)
{
	char *p_str = NULL;
	char *p_sub = NULL;
	assert(str != NULL);
	assert(sub != NULL);
	while (*str) {
		p_str = str;
		p_sub = sub;
		while (*p_str == *p_sub&&(*p_sub)!='\0'&&(*p_str)!='\0')
		{
			p_str++, p_sub++;
			if (*p_sub == '\0')
				return str;
		}
		str++;
	}
	return NULL;
}
int main()
{
	char str1[] = "abcdabcdefgh";
	char str2[] = "abcde";
	printf("%s\n",my_strstr(str1, str2));
	return 0;
}
