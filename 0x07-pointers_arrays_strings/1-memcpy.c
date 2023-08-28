#include <string.h>
#include "main.h"
/**
 * _memcpy - is our main function
 *@dest: a pointer
 *@src: a pointer
 *@n: an integer with n values
 *Return: the output (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;
c = 0;
while (c < n)
{
src[c] = dest[c];
c++;
}
return (dest);
}
