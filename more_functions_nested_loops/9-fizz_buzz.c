#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100, if it's
 * divisable by 3 it prints fizz,
 * if divisable by 5 print buzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int flag = 0;

		if (i % 3 == 0)
		{
			printf("Fizz");
			flag = 1;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			flag = 1;
		}
		if (flag == 0)
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
