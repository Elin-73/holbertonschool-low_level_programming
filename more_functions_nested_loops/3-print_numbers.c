#include <stdio.h>

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
		putchar(i);
	}
	putchar('\n');
}
