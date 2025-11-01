#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always (1)
 */
int main(void)
{
	int letter = 0;

	while (letter != 26)
	{
		int currentLetter = 97 + letter;

		if ((currentLetter != 101) && (currentLetter != 113))
		{
			putchar(currentLetter);
		}
		letter += 1;
	}
	putchar('\n');
	return (0);
}
