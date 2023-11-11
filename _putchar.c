#include <unistd.h>
#include "main.h"

/**
 * _putchar - print character to stdio.
 * @c: char passed to the function to print.
 * Return: an int (number of chars printer).
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
