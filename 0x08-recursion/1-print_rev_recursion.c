#include "main.h"
/**
 * _print_rev_recursion - main function.
 *@s: is a string
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
