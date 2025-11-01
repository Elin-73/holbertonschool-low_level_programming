#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		fHour = i % 10;
		sHour = i / 10;
		_putchar(fHour);
		_putchar(sHour);
		_putchar(58);
		for (j = 0; j < 60; j++)
		{
			fSecond= j % 10;
			sSecond= j / 10;
			_putchar(fSecond);
			_putchar(sSecond);
		}
	}
}
