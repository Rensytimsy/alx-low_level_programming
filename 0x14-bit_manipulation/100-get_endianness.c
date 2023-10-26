#include "main.h"
/**
 * get_endianness - function return a bit
 *Return: bit
*/
int get_endianness(void)
{
unsigned int j;
char *n;
j = 1;
n = (char *) &j;
return ((int)*n);
}
