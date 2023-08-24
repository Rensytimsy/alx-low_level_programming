#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - is our main function
 * @dest: a string parameter.
 * @src:a string parameter.
 * Return: (0) Success.
 */
char *_strcat(char *dest, char *src)
{
int a, b;
for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
return (dest);
}
