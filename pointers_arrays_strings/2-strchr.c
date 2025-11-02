#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p++)
	{
		if (*p == c)
		{
			return (p);
		}
	}
	return (NULL);
}
