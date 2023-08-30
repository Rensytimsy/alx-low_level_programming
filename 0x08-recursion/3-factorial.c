#include "main.h"
/**
 *factorial - our main function.
 *@n: an integer
 *Return: the factorial.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
