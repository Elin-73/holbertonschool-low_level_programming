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
	int i;
	int array[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 49, 50, 51, 52};
	int zeros[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 49, 49, 49, 49};

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar(zeros[i]);
			_putchar(array[i]);
		}
	_putchar('\n');
	}
}
