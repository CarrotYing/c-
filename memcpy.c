#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* memcpy(void* dst,const void* src, int len)
{
	char* d = (char*)dst;
	char* s = (char*)src;
	assert(dst != NULL);
	assert(src != NULL);
	while (len--)
		*d++ = *s++;
	return dst;
}
int main()
{
	int a[] = { 1,3,4,214,2,3 };
	int b[6] = { 0 };
	int i = 0;
	memcpy(b, a, 4*6);
	for (i = 0; i < 6; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}
