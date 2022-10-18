#include "main.h"

/**
 * print_number - prints out the value of an integer
 * @val: number to be printed
 *
 * Return: the number of digits printed
 */
int print_number(int val)
{
	int rem = 0;
	int num = 0;

	if (val < 0)
	{
		val = val * -1;
		num = num + _putchar('-');
	}
	if (val > 9)
	{
		num = num + print_number(val / 10);
		rem = val % 10;
		num = num + _putchar('0' + rem);
	}
	else
	{
		num = num + _putchar('0' + val);
	}
	return (num);
}
