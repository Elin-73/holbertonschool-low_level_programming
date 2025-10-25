#include <stdio.h>

/**
 * _isupper - checks if the integer inserted is between a range
 *
 * Return: gives 1 if it's the range of uppercase letters,
 * 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
