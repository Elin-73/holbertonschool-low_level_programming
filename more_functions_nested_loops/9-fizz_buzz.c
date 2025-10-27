#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - awaimwdaim
 *
 * Return: Always?
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		bool flag = true;

		if (i % 3)
		{
			printf("Fizz");
			flag = true;
		}
		if (i % 5)
		{
			printf("Buzz");
			flag = true;
		}
		if (flag != true)
		{
			printf("%d", i)
		}
		putchar('\n');
	}
}
