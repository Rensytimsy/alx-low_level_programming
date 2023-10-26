#include "main.h"
/**
 * _putchar function takes one arg which is a character
 *@c: is any character passed to the function
 *Return: the character passed
*/
int _putchar(char c)
{
  return(write(1, &c, 1));
}
