#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - is the starting point of the programm
 *Description: "The code below prints random numbers"
 *Return: 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
/* your code goes there */
return (0);
}
