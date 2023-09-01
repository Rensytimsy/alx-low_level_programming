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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
