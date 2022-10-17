#include "main.h"

/**
 * _printf - prints a formatted data
 * @format: the identifier
 *
 * Return: returns nothing
 */
int _printf(const char * const format, ...)
{
	va_list argz;
	int i = 0, count = 0;
	int word_length = strlen(format);

	va_start(argz, format);
	while ((format[i]) && (i < word_length))
	{
		if ((format[i] == '%') & (format[i + 1] != '%'))
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(argz, int));
					count++;
					break;
				case 's':
					count = count + _puts(va_arg(argz, char*));
					break;
			}
			i++;
		}
		if (i < word_length)
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else
			break;
	}
	va_end(argz);
	return (count);
}

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
