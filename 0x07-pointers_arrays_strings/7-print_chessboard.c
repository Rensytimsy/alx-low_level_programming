#include "main.h"
/**
 *print_chessboard -is our main function
 *@a: characters
 */
void print_chessboard(char (*a)[8])
{
	int m, b;

	for (m = 0; m < 8; m++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[m][b]);
		}
		_putchar('\n');
	}
}
