#include "main.h"

/**
 * _printf - a function that take a format and print it
 * on the stdout, can take unlimited amount of args and can
 * process different types of format.
 * @format: format passed to the function to process.
 * @...: args passed to the function.
 * Return: an int.
*/
int _printf(const char *format, ...)
{
	int counter = 0;

	if (!format)
		return (-1);

	va_list args_passed; //...
	va_start(args_passed, format);

	while (*format)
	{
		if (*format == '%')
		{
			counter += handelSpecifier(*(format++), args_passed); // working on this function
		}
		else
		{
			counter += write(1, format, 1);
		}
		format++;
	}
	va_end(args_passed);
	return (counter);
}
