#include "main.h"
#include <stdio.h>
/**
 * swap_int - is a void function
 * @a : is an int type variable
 * @b : is an int type variable
 */
void swap_int(int *a, int *b)
{
int num;
num = *a;
*a = *b;
*b = num;
}
