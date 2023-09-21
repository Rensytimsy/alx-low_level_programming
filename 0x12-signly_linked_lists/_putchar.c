#include "lists.h"
/**
 * _putchar - takes a character as a parameter
 *@c: is the character passed
 *Return: The character provided
*/
int _putchar(char c)
{
return(write(1, &c, 1));
}
