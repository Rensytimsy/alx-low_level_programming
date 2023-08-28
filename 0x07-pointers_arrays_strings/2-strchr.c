#include <string.h>
#include "main.h"
/**
 *_strchr - is the main function.
 *@s: is a string provided.
 *@c: is a character pattern being matched
 *Return: s which is the string
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
else
s++;
}
if (*s == '\0')
return (NULL);
else
return (s);
}
