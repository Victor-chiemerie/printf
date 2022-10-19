#include "main.h"

/**
 * prints_pointers - prints the address of a pointer variable
 * @number: the address value
 *
 * Return: the number of characters printed
 */
int prints_pointers(long int number)
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
