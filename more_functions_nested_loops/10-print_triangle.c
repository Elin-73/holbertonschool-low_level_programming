#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - awaimwdaim
 *
 * Return: Always?
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int k;

		for (i = 0; i < size; i++)
		{
			for (k = size-i-1; k > 0; k--)
			{
				_putchar(32);
			}
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
