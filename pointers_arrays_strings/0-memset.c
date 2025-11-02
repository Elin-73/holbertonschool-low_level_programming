#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char* p=s;
	
	while(n--)
	{
		*p++ = (unsigned char)b;
	}
	return s;
}
