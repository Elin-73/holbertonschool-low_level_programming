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
	printf("%zu", sizeof(myChar));
	printf(" byte(s)\n");
	printf("Size of an int: ");
	printf("%zu", sizeof(myInt));
	printf(" byte(s)\n");
	printf("Size of a long int: ");
	printf("%zu", sizeof(myLongInt));
	printf(" byte(s)\n");
	printf("Size of a long long int: ");
	printf("%zu", sizeof(myLongLontInt));
	printf(" byte(s)\n");
	printf("Size of a float: ");
	printf("%zu", sizeof(myFloat));
	printf(" byte(s)\n");
	return (0);
}
