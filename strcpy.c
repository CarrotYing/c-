#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *dst, const char *src)
{
	char *ret = dst;
	assert(dst!=NULL);
	assert(src!=NULL);
	while (*dst++ = *src++);
	return ret;
}
int main()
{
	char s[50] = { 0 };
	char str[50] = { 0 };
	scanf("%s", s);
	my_strcpy(str, s);
	printf("%s\n", str);
	return 0;
}
