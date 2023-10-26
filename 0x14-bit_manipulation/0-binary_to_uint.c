#include "main.h"
/**
 * binary_to_uint - takes one arg which is a string in binary
 *@b: is a random binary number
 *Return: ui which is number represention
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int ui;
int size, b_two;

if (!b)
return (0);
ui = 0;
for (size = 0; b[size] != '\0'; size++)
;
for (size--, b_two = 1; size >= 0; size--, b_two *= 2)
{
if (b[size] != '0' && b[size] != '1')
{
return (0);
}
if (b[size] & 1)
{
ui += b_two;
}
}
return (ui);
}
