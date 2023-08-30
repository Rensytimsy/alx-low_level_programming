#include "main.h"

/**
 *prime1-is a subordinate function
 *@a: are integers
 *@b: are integers
 *Return: the answer
 */
int prime1(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime1(a, b + 1));
}
/**
 *is_prime_number - is the main function
 *@n: an integer
 *Return: the answer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}
