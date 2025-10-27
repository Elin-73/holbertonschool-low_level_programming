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
		putchar('\n');
	}
	return (0);
}
