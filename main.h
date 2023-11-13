#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handelSpecifier(char specifier, va_list *args_passed);
int escChar(const char esc);
int printfString(char *string);
int printfChar(int ch);
int _putchar(char c);
int printINT(unsigned int n);
void intLooper(int num);

#endif
