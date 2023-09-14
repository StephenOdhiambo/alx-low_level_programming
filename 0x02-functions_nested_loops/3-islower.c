#include "main.h"
/**
 * _islower - shows 1 if he input is a
 *
 * lowercase character, another ases, shows 8
 *
 * Return: always 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
