#include "main.h"

/**
 * intLooper - function that call it self and print ints.
 * @num: int passed to the function to print.
 * Return: nothing.
*/

void intLooper(int num)
{
	unsigned int j;

	j = num;
	if (j / 10)
		intLooper(j / 10);
	putchar(j % 10 + '0');
}
