#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - explanation
 *
 * return: 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array =  (char *)malloc(sizeof(char) * size);
	array[0] = c;
	return (array);
}
