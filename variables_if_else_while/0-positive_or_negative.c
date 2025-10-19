#include <stdlib.h>
#include <time.h>

/**
 * main - compares the value of a random number
 * to zero to see if it's negative or positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(n, "is negative");
	}
	else if (n > 0)
	{
		printf(n, "is positive");
	}
	else
	{
		printf(n, "is zero");
	}
	return (0);
}
