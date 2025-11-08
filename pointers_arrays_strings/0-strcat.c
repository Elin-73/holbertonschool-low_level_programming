#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *p = dest;

	while (p++)
	{
		*dest++ = p;
	}
    
    while(src++)
    {
        *dest++ = src;
    }
    printf(dest);
    return dest;
}
