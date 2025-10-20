#include <stdio.h>

/*
 * main - prints the desired string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int letter = 0;

	while (letter < 52)
	{
		putchar(alphabet[letter]);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
