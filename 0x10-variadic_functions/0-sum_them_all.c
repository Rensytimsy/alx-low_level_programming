#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is the main function.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ac;
unsigned int i, sum = 0;

va_start(ac, n);

for (i = 0; i < n; i++)
sum += va_arg(ac, int);

va_end(ac);

return (sum);
}
