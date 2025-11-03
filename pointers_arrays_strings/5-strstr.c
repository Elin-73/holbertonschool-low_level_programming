#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*p)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
