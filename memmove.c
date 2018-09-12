#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dst, void* src, int len)
{
	char* pd = (char*)dst;
	char* ps = (char*)src;
	assert(dst);
	assert(src);
	if (ps < pd && (ps + len) >= pd)
	{
		ps += len - 1;
		pd += len - 1;
		while (len--)
			*pd-- = *ps--;
	}
	else {
		while (len--)
			*pd++ = *ps++;
	}
	return dst;
}
int main()
{
	char buf[32] = "1234abcd";
	my_memmove(buf+1, buf, 9);
		printf("%s ", buf);
	printf("\n");
	return 0;
}
