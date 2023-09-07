#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - is the main function with unsigned int b as a parameter
 *@b: is an integer values of memory
 *Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
else
return (ptr);
}
