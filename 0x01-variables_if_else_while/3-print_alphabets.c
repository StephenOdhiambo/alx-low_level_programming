#include <stdio.h>
/*
*main: start of the program
*always returns : 0
**/
int main(void)
{
	int ch='z';
	int CH='Z';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while(CH <='Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
