#include "main.h"
/**
 *clear_bit - takes two arguments
 *@n: are bit numbers
 *@index: bit numbers positions
 *Return: 1 fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int k;
if (index > 63)
return (-1);
k = 1 << index;
if (*n & k)
*n ^= k;
return (1);
}
