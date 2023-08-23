#include<unistd.h>

int _putchar(char l)
{
  return(write(1, &l, 1));
}
