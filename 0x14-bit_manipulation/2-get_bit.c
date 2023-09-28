#include "main.h"
/**
 *get_bit - func takes two arguments
 *@n: is the no in bits
 *@index: is a bit index
 *Return: (-1) error
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int k;
if (n == 0 && index < 64)
return (0);
for (k = 0; k <= 63; n >>= 1, k++)
{
if (index == k)
{
return (n & 1);
}
}
return (-1);
}
