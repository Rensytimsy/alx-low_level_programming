#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 */
void reverse_array(int *a, int n)
{
int k, b;
b = n - 1;
for (k = 0; k < n / 2; k++)
{
int start, end;
start = a[k];
end = a[b];
a[k] = end;
a[b] = start;
b--;
}
}
