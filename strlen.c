#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @str: string to get length of
 *
 * Return: length of string
 */
 int _strlen(char *str)
{
		int len = 0;

			while (*str++)
						len++;

				return (len);
}
