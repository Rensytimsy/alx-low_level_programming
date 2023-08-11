#include <stdio.h>
/**
 * main - start of the program
 * Description: "prints alphabets in lowercase"
 * Return: 0 (Success)
 */
int main(void)
{
char charcters;
for (charcters = 'a'; charcters < 'z'; charcters++)
putchar(charcters);
putchar('\n');
return (0);
}
