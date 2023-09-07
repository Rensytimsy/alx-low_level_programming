#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - is our main function with three parameters
 *@s1: first arg
 *@s2: second arg
 *@n: third arg
 *Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
n++;

ptr = malloc(sizeof(char) * (n + 1));
if (ptr == NULL)
return (NULL);
n = 0;
for (i = 0; s1[i]; i++)
ptr[n++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
ptr[n++] = s2[i];

ptr[n] = '\0';
return (ptr);
}
