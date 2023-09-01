#include "main.h"
#include <stdio.h>
/**
 *main - is our main function
 *@argc: is the numbers of argument passed in the commandline
 *@argv: are the argumnets passed
 *Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return 0;
}
