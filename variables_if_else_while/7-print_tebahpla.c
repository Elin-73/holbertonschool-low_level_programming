#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return:
 */
int main(void)
{
	int letter = 26;

	while (letter != 0)
	{
		int currentLetter = 97 + letter;

		putchar(currentLetter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
