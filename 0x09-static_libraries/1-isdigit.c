#include "main.h"
/**
 * _isdigit - is a function that returns either 1 or 0
 *@c: contains the value used for testing i_isdigit function
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
