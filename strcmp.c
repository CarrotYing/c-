#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(char* dst, char* src)
{
	unsigned char* d = (unsigned char*)dst;//ASCII>127
	unsigned char* s = (unsigned char*)src;
	int ret = 0;
	assert(dst != NULL);
	assert(src != NULL);
	while (!(ret=(*d-*s))&&(*d!='\0'))
	{
		d++, s++;
	}
	if (ret>0)
		return 1;
	if (ret<0)
		return -1;
	return 0;
}
int main() {
	char s1[] = "ABCD";
	char s2[] = "abcd";
	printf("%d %d\n", my_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d %d\n", my_strcmp(s2, s1), strcmp(s2, s1));
	printf("%d\n", my_strcmp(s1, s1));
	return 0;
}
