#include <stdio.h>
#include "main.h"
/**
 * _strcat - is our main function
 * @dest: a string parameter.
 * @src:a string parameter.
 * Return: (0) Success.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
printf("%s\n", dest);
return (0);
}
