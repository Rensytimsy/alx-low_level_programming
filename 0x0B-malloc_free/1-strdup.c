#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
  char *strCpy;
  int a, len = 0;

  if (str == NULL)
    return (NULL);

  for (a = 0; str[a]; a++)
    len++;

  strCpy = malloc(sizeof(char) * (len + 1));

  if (strCpy == NULL)
    return (NULL);

  for (a = 0; str[a]; a++)
    strCpy[a] = str[a];

  strCpy[len] = '\0';

  return (strCpy);
}
