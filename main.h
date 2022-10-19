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
int Hexa_small_converter(unsigned int x);
int Hexa_converter(unsigned int x);
int octal_converter(unsigned int number);
int  _unsigned(unsigned int c);
#endif
