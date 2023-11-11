#include "main.h"

/**
 * _strlen - get the length of a string.
 * @s: string passed to the function.
 * Return: an int (length os a string).
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
