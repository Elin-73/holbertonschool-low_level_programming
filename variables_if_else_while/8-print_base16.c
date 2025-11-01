#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return:
 */
int main(void)
{
	int letter = 0;

	while (letter != 10)
	{
		int currentLetter = 48 + letter;

		putchar(currentLetter);
		letter = letter + 1;
	}
	letter = 0;

	while (letter != 6)
        {
                int currentLetter = 97 + letter;

                putchar(currentLetter);
                letter = letter + 1;
        }
	putchar('\n');
	return (0);
}
