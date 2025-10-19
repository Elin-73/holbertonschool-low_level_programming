#include <stdio.h>

/**
 * main - prints the size of variables depending on the bit system
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myChar;
	int myInt;
	long int myLongInt;
	long long int myLongLontInt;
	float myFloat;

	printf("Size of a char: ");
	printf("%zu\n", sizeof(myChar));
	printf("Size of an int: ");
	printf("%zu\n", sizeof(myInt));
	printf("Size of a long int: ");
	printf("%zu\n", sizeof(myLongInt));
	printf("Size of a long long int: ");
	printf("%zu\n", sizeof(myLongLongInt));
	printf("Size of a float: ");
	printf("%zu\n", sizeof(myFloat));
	return (0);
}
