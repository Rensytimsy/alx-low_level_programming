#include "main.h"
/**
 *get_endianness - func return void as aparameter
 *Return: char s
*/
int get_endianness(void)
{
unsigned int endBit;
char *s;
endBit = 1;
s = (char *) &endBit;
return ((int)*s);
}
