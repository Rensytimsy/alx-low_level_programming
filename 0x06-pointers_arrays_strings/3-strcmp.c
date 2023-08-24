#include "main.h"
#include <stdio.h>
/**
 *_strcmp - is our main function.
 *@s1: is a string
 *@s2: is  a string
 * Return: returns compared strings
 */
int _strcmp(char *s1, char *s2)
{
  for(; (*s1 != '\0' && *s1 != '\0') && (*s1 == *s2); s1++, s2++)
if(*s1 == *s2)
{
return (0);
}
return(*s1 - *s2);
}
