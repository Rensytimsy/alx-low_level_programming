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
strcat(dest, src);
printf("%s\n", dest);
return (0);
}
