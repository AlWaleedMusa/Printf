#include "main.h"

/**
 * handelSpecifier - handel passed character and determine the
 * right function to call accordingly.
 * @specifier: char passed to the function from the _printf function.
 * @args_passed: arguments passed on _printf.
 * Return: an int (number of printed characters).
*/
int handelSpecifier(char specifier, va_list args_passed)
{
	int counter = 0;

	if (specifier == 's')
	{
		counter += printfString(va_arg(args_passed, char *));
	}
	if (specifier == 'c')
	{
		counter += printfChar(va_arg(args_passed, int));
	}
	return (counter);
}
