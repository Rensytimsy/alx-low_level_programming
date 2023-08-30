#include "main.h"
/**
 *_sqrt_recursion - is the main function.
 *sqrt1 - is a subordinate function that helps perform operations
 *@x: is an integer
 *@y: is an integer
 *Return: returns the answer.
 */

int sqrt1(int x, int y)
{
if (y * y == x)
return (y);
if (y * y >  x)
return (-1);
return (sqrt1(x, y + 1));
}

int _sqrt_recursion(int n)
{
return (sqrt1(n, 1));
}
