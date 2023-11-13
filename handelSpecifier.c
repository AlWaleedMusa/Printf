#include "main.h"

/**
 * handelSpecifier - handel passed character and determine the
 * right function to call accordingly.
 * @specifier: char passed to the function from the _printf function.
 * @args_passed: arguments passed on _printf.
 * Return: an int (number of printed characters).
*/

int handelSpecifier(char specifier, va_list *args_passed)
{
	int counter = 0;

	if (specifier == 's')
	{
		char *string = va_arg(*args_passed, char *);

		counter += printfString(string);
	}
	else if (specifier == 'c')
	{
		unsigned char ch = va_arg(*args_passed, int);

		counter += printfChar(ch);
	}
	else if (specifier == '%')
	{
		unsigned char ch = 37;

		counter += printfChar(ch);
	}
	else if (specifier == 'd')
	{
		int num = va_arg(*args_passed, int);
		printINT(num);
	}
	else
	{
		counter += write(1, "%", 1);
		counter += write(1, &specifier, 1);
	}
	return (counter);
}
