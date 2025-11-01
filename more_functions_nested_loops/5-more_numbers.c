#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times.
 * @i: counter
 * @*str: numbers
 *
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
