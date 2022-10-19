#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int binary_converter(int number);
int print_number(int val);
int _strlen(const char *str);
int _printf(const char *format, ...);
int _puts(char *str);
int prints_pointers(long int number);
int hexa_decimal_converter_small(unsigned int number);
int hexa_decimal_converter_big(unsigned int number);
int octal_converter(unsigned int number);
#endif
