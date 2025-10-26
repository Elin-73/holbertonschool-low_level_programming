#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints 0-9.
 *
 * Return: .
 */
void print_numbers(void)
{
	int i = 48;

	for (i; i < 58; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
}
