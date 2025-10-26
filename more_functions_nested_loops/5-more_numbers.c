#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints 0-9.
 *
 * Return: .
 */
void more_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	for (i = 48; i < 52; i++)
        {
                _putchar(49);
		_putchar(i);
        }
	_putchar('\n');
}
