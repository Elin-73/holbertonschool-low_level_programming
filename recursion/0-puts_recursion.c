#include <stdio.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
void _puts_recursion(char *s)
{
	char *next = s;

	_putchar(*next);
	next++;
	if (*next != '\0')
	{
		_puts_recursion(next);
	}
	else
	{
		_putchar('\n');
	}
}
