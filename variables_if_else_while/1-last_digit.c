#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - generates a random integer
 * and compares it to 2 numbers WOW so awaesome
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("The last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit == 0)
	{
		printf("0\n");
		return (0);
	}
	if (lastDigit < 6)
	{
		printf("less than 6 and not 0\n");
	}
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	return (0);
}
