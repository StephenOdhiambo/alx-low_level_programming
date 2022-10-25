#include "main.h"

/**
  *_strlen - returns the length of a string
  *@s: string
  *return: length
  */
int _strlen(char *s)
{
	int _strlen = 0;

	while (*s != '\0')
	{
		_strlen++;
		s++;
	}
	return (_strlen);
}
