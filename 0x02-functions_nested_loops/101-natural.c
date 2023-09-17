#include <stdio.h>
#include "main.h"
/**
 * main - Check for Multiples of 3 and 5
 * Return: (0) indicating successful execution
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
