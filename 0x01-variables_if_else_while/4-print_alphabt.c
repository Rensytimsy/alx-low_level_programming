#include <stdio.h>
/**
 * main - is the start point of the program
 *Return: 0 (Success)
 */
int main()
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph != 'p' && alph != 'e')
{
putchar(alph);
}
}
putchar('\n');
return (0);
}
