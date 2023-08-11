#include <stdio.h>
/**
 * main - starting point of the program
 * Description: "Prints both upercase and lowercase alphabets"
 * Return: 0 (Success)
 */
int main(void)
{
char lower;
char  upper;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');
return (0);
}
