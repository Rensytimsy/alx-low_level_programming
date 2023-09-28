#include "main.h"
/**
 *binary_to_uint - func takes binary numbers
 *@b: is a string with bit numbers
 *Return: number in bit
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int u_int;
int len, b_two;
if (!b)
return (0);
u_int = 0;
for (len = 0; b[len] != '\0'; len++)
;
for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
if (b[len] & 1)
{
u_int += b_two;
}
}
return (u_int);
}