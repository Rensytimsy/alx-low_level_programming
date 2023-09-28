#include "main.h"
/**
 *set_bit - func takes two arguments
 *@n: no of bits
 *@index: a bit index
 *Return: 1 for fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int s_bit;
if (index > 63)
return (-1);
s_bit = 1 << index;
*n = (*n | s_bit);
return (1);
}
