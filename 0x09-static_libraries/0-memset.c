#include <string.h>
#include "main.h"
/**
 * _memset - is our main function.
 *@s: is our pointer.
 *@b: is the value to be copied.
 *@n: is the number of times to be copied.
 *Return: s which is the output.
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int k;
k = 0;
while (k < n)
{
s[k] = b;
k++;
}
return (s);
}
