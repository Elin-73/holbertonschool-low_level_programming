#include <stdio.h>

/**
 * _isdigit - checks if the integer inserted is between a range.
 *
 * Return: gives 1 if it's the range of being a digit,
 * 0 if otherwise.
 */
int _isdigit(int c)
{
        if ((c >= 48) && (c <= 57))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
