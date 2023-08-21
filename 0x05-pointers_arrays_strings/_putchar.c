#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - is a function that returns a character passed in as a parameter
 *@L: IS THE CHARCTER PASSED AS A PARAMETER
 * Return: returns the character passed
 */
int _putchar(char l)
{
return(write(1, &l, 1));
}
