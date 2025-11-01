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

	for (j = 0; j < 10; j++)
	{
		char *str = "01234567891011121314";

		while (*str)
		{
			_putchar(*str++);
		}
	_putchar('\n');
	}
}
