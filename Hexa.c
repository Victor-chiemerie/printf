#include "main.h"

/**
*Hexa- print the hexedecimal number
*@x: an integer value.
*Description: The function convert an integer number to Capital letter
*hexadecimal value.
*Return: return an integer i.
*/

int Hexa_converter( unsigned int x)
{
        int *arr;
	int i = 0;
	int j;
        arr = malloc(sizeof(int) * x);
        if (arr == 0)
                return (0);
/* conversion of the value */
        while (x != 0)
        {
                        int temp = 0;
                        temp = x % 16;

                        if (temp < 10)
                        {
                                arr[i] = temp + 48;
                                i++;
                        }
                        else
                        {
                                        arr[i] = temp + 55;
                                        i++;
                        }
                                x = x /16;

                }
/* the values converted */
                        for (j = i - 1; j >= 0; j--)
                                _putchar( arr[j]);
                        free(arr);
                        return (i);
}