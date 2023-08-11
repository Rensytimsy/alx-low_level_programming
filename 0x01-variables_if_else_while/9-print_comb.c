#include <stdio.h>
/**
 *main - is the starting point of the program
 *Return: 0 (Success)
*/
int main(void)
{
int nums;
for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
if (nums != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
