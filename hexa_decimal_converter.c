#include "main.h"

/**
 * hexa_decimal_converter - converts decimal to hexa_d
 * @number: the decimal parameter
 *
 * Return: the number of characters printed
 */
int hexa_decimal_converter(long int number)
{
	int counter = 0, i;
	char *array;
	char *hexa = "0123456789abcdef";

	array = malloc(sizeof(char) * 50);
	if (array == 0)
	{
		return (0);
	}
	while (number != 0)
	{
		array[counter] = hexa[number % 16];
		counter++;
		number = number / 16;
	}
	array[counter++] = 'x';
	array[counter++] = '0';
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	free(array);
	return (counter);
}
