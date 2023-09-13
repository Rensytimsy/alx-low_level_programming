#include "function_pointers.h"
/**
 * int_index - is the main function
 *@array: is an array
 *@size: size/length
 *@cmp: a pointer function
 *Return: (-1) for fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a, b;

if (size > 0 && array && cmp)
{
for (a = 0; a < size; a++)
{
b = cmp(array[a]);
if (b)
break;
}
if (a < size)
return (a);
}
return (-1);
}
