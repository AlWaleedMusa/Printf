#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* int _putchar(char c);*/ 
/* i think we should use write() function since putchar is not mentioned on the authorized functions section + write is easier to deal with in my opinion. */

int _printf(const char *format, ...);
int handelSpecifier(char specifier, va_list args_passed);
int printfString(char *string);

#endif
