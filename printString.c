#include "main.h"

/**
 * printfString - print strings passed to it.
 * @string: pointer to the string to print.
 * Return: int (number of printed characters)
*/

int printfString(char *string)
{
	int counter = 0;

	char *strCpy = malloc(sizeof(char) * strlen(string));
	strcpy(strCpy, string);
	counter += (write(1, strCpy, strlen(strCpy)));

	free(strCpy);
	return(counter);
}
