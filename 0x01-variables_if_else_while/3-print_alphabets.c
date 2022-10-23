#include <stdio.h>
#include <stdlib.h>
/*
*main - returns alphabets both except e and q
*
*Return always 0
**/
int main(void)
{
	int ch = 'z';
	int CH = 'Z';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (CH <='Z')
	{
		putchar (CH);
		CH++;
	}
	putchar ('\n');
	return (0);
}
