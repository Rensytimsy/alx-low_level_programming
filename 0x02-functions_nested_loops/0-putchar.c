#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - is the start point of our programm
 * Return: 0 Success
 */
int main(void)
{
write(1, "_putchar", strlen("_putchar"));
putchar('\n');
return (0);
}
