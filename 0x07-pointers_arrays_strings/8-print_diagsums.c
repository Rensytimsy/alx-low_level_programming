#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - main function
 *@a: is a param
 *@size: is a param
 */
void print_diagsums(int *a, int size)
{
	int m;

	unsigned int sum, sum1;

	 sum = 0;
	 sum1 = 0;

	for (m = 0; m < size; m++)
	{
		sum += a[(size * m) + m];
		sum1 += a[(size * (m + 1)) - (m + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
