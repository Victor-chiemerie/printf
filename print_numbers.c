#include "main.h"

/**
 * print_number - prints out the value of an integer
 * @val: number to be printed
 * @num: the number of digits printed
 *
 * Return: the number of digits printed
 */
int print_number(int val, int num)
{
	int rem;

	if (val < 0)
	{
		val = val * -1;
		_putchar('-');
		num++;
	}
	if (val > 9)
	{
		num = num + print_number(val / 10, num);
		rem = val % 10;
		_putchar('0' + rem);
		num++;
	}
	else
	{
		_putchar('0' + val);
		num++;
	}
	return (num);
}
