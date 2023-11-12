#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handelSpecifier(char specifier, va_list *args_passed);
int printfString(char *string);
int printfChar(int ch);
int _strlen(char *s);
int _putchar(char c);

#endif
