#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - is the main function
 *@array: is an array
 *@size: is an int;
 *@action: is a pointer function
 *Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;
if (array && action)
{
a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
}
