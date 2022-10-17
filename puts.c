#include "main.h"

/**
 * _puts - prints the value of the string pointer parameter
 * @str: the String parameter
 *
 * Return: the size of the printed string
 */
int _puts(char *str)
{
	int i;
	int string_length = strlen(str);

	for (i = 0; i < string_length; i++)
	{
		_putchar(str[i]);
	}
	return (string_length);
}
