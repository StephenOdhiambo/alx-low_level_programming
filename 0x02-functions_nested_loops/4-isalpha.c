#include "main.h"
/**
 * _islpha - shows 1 if the input is a
 * letter another casesm shows 0,
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for leters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
