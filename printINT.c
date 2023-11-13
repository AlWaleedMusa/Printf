#include "main.h"

/**
 * 
*/

int printINT(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printINT(n / 10);
    putchar(n % 10 + '0');
	return (0);
}
