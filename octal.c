#include "main.h"

/**
 * octal_converter - converts decimal to binary
 * @number: the decimal parameter
 *
 * Return: the binary form
*/
int octal_converter(unsigned int number)
{
        int counter = 0, i;
        int *array;
        array = malloc(sizeof(int) * 1000);

        if (array == 0)
        {
                return (0);
        }
/* convert algorithm */
        while(number != 0)
        {
                array[counter] = number % 8;
                counter++;
                number = number / 8;
        }
/* The value converted*/
        for(i = counter - 1; i >= 0; i--)
        {
                _putchar('0' + array[i]);
        }
        free(array);
        return (counter);
}

