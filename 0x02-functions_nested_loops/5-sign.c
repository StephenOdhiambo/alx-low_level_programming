#include "main.h"
/**
 * print_sign - Determins if the argument is greater than 
 * equal to or less than zero 
 *
 * @n - is an integer
 *
 * Return: 1 if n is greater than 0, zero when n is 0
 * and -1 if n is less than 0
 *
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	if (n = 0)
	{
		_putchar(48);
		return(0);
	}
	else
	{
		_putchar(45);
		return(-1);
	}
	_putchar('\n');
}
