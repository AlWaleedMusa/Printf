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
		counter += printfString("\\t");
	}
	else if (esc == 'n')
	{
		counter += printfString("\\n");
	}
	else if (esc == 'a')
	{
		counter += printfString("\\a");
	}
	return (counter);
}
