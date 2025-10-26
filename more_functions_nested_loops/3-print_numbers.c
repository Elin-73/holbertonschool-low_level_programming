#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints 0-9.
 *
 * Return: .
 */
void print_numbers(void)
{
	char i;

	for (i = '1'; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
