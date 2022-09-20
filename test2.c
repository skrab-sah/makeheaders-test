
#include <stdio.h>


#ifndef __cplusplus
char* test2 (const char* str)
{
	printf("test2:\n");
	return (char*)str;
}
#else
char* test2 (char* str)
{
	printf("test2:\n");
	return str;
}
const char* test2 (const char* str)
{
	printf("test2:\n");
	return str;
}

#endif
