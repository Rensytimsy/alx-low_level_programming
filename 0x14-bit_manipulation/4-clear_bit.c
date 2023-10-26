#include "main.h"
/**
 *clear_bit - function takes two arguments n and index
 *@n: binary number
 *@index: bit position
 *Return: (1) success
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
