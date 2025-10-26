#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints 0-9.
 *
 * Return: .
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
}
