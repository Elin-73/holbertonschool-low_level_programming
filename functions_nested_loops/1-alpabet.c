#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
