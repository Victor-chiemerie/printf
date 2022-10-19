#include "main.h"

/**
*_unsigned- print the hexedecimal number
*@c: an integer value.
*Description: The function convert an integer number to
*unsigned value.
*Return: return an integer count.
*/

int  _unsigned(unsigned int c)
{
        int count = 0;

        
        
                if (c > 10)
                        _unsigned(c / 10);
                count++;
                _putchar((c % 10) + '0');
        
        return (count);


}
