#include "main.h"

/**
 *_puts_recursion - is the main function.
 *@s: is a string passed as aparameter
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
