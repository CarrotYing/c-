#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* dst,const char* src)
{
	char* ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	dst += strlen(dst);
	while (*dst++ = *src++);
	return ret;
}
int main() {
	char s1[30] = "Hey ";
	char s2[] = "girl\n";
	my_strcat(s1, s2);
	printf("%s", s1);
	return 0;
}
