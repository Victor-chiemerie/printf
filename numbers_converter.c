#include "main.h"

/**
 * binary_converter - converts decimal to binary
 * @number: the decimal parameter
 *
 * Return: the binary form
 */
int binary_converter(int number)
{
	int counter = 0, i;
	int *array;

	array = malloc(sizeof(int) * number);
	if (array == 0)
	{
		return (0);
	}
	while (number != 0)
	{
		*(array + counter) = number % 2;
		counter++;
		number = number / 2;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar('0' + array[i]);
	}
	free(array);
	return (counter);
}

/**
 * hexa_decimal_converter_small - converts decimal to binary
 * @number: the decimal parameter
 *
 * Return: the number of characters printed
 */
int hexa_decimal_converter_small(unsigned int number)
{
	int counter = 0, i;
	char *array;
	char *hexa = "0123456789abcdef";
	int bits = 8;

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
	if (counter > bits)
		bits += 8;
	while (counter < bits)
	{
		array[counter] = '0';
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	free(array);
	return (counter);
}

/**
 * hexa_decimal_converter_big - converts decimal to binary
 * @number: the decimal parameter
 *
 * Return: the number of characters printed
 */
int hexa_decimal_converter_big(unsigned int number)
{
	int counter = 0, i;
	char *array;
	char *hexa = "0123456789ABCDEF";
	int bits = 8;

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
	if (counter > bits)
		bits += 8;
	while (counter < bits)
	{
		array[counter] = '0';
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	free(array);
	return (counter);
}

/**
 * octal_converter - converts decimal to binary
 * @number: the decimal parameter
 *
 * Return: the number of characters printed
 */
int octal_converter(unsigned int number)
{
	int counter = 0, i;
	int *array;

	array = malloc(sizeof(int) * 32);
	if (array == 0)
	{
		return (0);
	}
	while (number != 0)
	{
		array[counter] = number % 8;
		counter++;
		number = number / 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar('0' + array[i]);
	}
	free(array);
	return (counter);
}
