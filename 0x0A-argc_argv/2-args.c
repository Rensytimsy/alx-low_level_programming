#include "main.h"
#include <stdio.h>
/**
 *main - is our main function
 *@argc: the count of arguments passed
 *@argv: the num of arguments passed at the command line
 *Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int a;
if (argc > 1)
{
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
}
else
{
printf("%s\n", argv[0]);
}
return (0);
}
