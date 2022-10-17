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
