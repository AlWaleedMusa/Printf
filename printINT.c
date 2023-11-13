#include "main.h"

/**
 * printINT - a function that handel %d and %i specifiers.
 * @n: number passed to the function from the handler.
 * Return: an int (count of numbers printed).
*/

int printINT(unsigned int n)
{
    int counter = 1;
	int i = 0;

	i = n;
	if (i < 0)
	{
		putchar('-');
		i *= -1;
		n = i;
		counter += 1;
	}
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	intLooper(i);
	return (counter);
}
