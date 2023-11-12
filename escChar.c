#include "main.h"

/**
 * escChar - handel escape character.
 * @format: char passed from the handling function to check.
 * @args_passed: list of arguments.
 * Return: and int.
*/

int escChar(const char esc)
{
	int counter = 0;

	if (esc == 't')
	{
		counter += (write(1, "/t", 1));
	}
	else if (esc == 'n')
	{
		counter += (write(1, "/n", 1));
	}
	else if (esc == 'a')
	{
		counter += (write(1, "/a", 1));
	}
	return (counter);
}
