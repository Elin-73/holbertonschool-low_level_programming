#include <stdio.h>

/*
 * main - prints the desired string
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$"
	int letter = 0;

	while (letter < 53)
	{
		putchar(alphabet[letter]);
	}
	putchar(\n);
	return (0);
}
