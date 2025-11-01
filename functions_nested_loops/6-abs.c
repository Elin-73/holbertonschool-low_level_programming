#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times.
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c - c - c;
		return (c);
	}
	return (c);
}
