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


