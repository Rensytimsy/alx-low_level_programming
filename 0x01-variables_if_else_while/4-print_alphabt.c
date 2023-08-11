#include <stdio.h>
/**
 * main - is the start point of the program
 *Return: 0 (Success)
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph != 'q' && alph != 'e')
{
putchar(alph);
}
}
putchar('\n');
return (0);
}
