#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
int k, j;
if (size <= 0)
_putchar('\n');
for (k = 0; k < size; k++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
_putchar('\n');
}
}
