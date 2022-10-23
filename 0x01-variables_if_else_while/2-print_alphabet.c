#include <stdio.h>

/**
   * main - prints all possible different combinations of two digits.
    * Return: Always 0 (Success)
     */

int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
