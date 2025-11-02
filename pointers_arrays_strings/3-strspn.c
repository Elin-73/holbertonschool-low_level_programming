#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	int fOccur = 0;

	while (*p++)
	{
		char *i = accept;
		int flag = 0;

		while (*i++)
		{
			if (*p == *i)
			{
				flag = 1;
			}
		}
		fOccur ´+= 1
		if (flag != 1)
		{
			return (fOccur);
		}
	}
	fOccur = 0;
	return fOccur;
}
