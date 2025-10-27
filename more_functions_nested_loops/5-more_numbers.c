#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints 0-9.
 *
 * Return: .
 */
void more_numbers(void)
{
	int j;
	char *str = "012345678901011121314";

	for (j = 0; j < 10; j++)
	{
		while (*str)
		{
			putchar(*str++);
		}
	_putchar('\n');
	}
}
