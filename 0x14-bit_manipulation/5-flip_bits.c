#include "main.h"
/**
 *flip_bits - fun flips bits
 *@n: is a bit no
 *@m: is a bit no
 *Return: totalBits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int totalBits;
for (totalBits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
totalBits++;
}
return (totalBits);
}
