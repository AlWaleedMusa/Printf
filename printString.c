#include "main.h"

/**
 * printfString - print strings passed to it.
 * @string: pointer to the string to print.
 * Return: int (number of printed characters)
*/

int printfString(char *string)
{
	if (string == NULL)
	{
		string = "(null)";
	}
	return (write(1, string, strlen(string)));
}
