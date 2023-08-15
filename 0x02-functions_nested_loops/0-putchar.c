#include "main.h"
#include <unistd.h>
/**
 * main - is the start point of our programm
 * Return: 0 Success
 */
int main(void)
{
char *h = "_putchar";
while(*h)
{
_putchar(*h);
h++;
}
return (0);
}
