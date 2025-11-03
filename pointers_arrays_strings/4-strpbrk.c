#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p)
	{
		char *i = accept;

		while (*i)
		{
			if (*p == *i)
			{
				return (p);
			}
			i++;
		}
		p++;
	}
	return (NULL);
}
