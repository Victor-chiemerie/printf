#include "main.h"

/**
 * _printf - prints a formatted data
 * @format: the identifier
 *
 * Return: the length of the printed string
 */
int _printf(const char * const format, ...)
{
	va_list argz;
	int i = 0, count = 0;
	int value = 0;
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
					count = count + _putchar(va_arg(argz, int));
					break;
				case 's':
					count = count + _puts(va_arg(argz, char*));
					break;
				case 'i':
					count = count + print_number(va_arg(argz, int), value);
					break;
				case 'd':
					count = count + print_number(va_arg(argz, int), value);
					break;
			}
			i++;
		}
		if (i < word_length)
		{
			count = count + _putchar(format[i]);
			i++;
		}
		else
			break;
	}
	va_end(argz);
	return (count);
}
