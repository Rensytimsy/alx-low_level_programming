#include "main.h"
/**
 * string_toupper - main function
 *@s: is our string
 *Return: string
 */
char *string_toupper(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}
i++;
}
return (s);
}
