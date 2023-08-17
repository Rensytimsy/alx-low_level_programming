#include <unistd.h>
/**
 *write - is used to print out then content passed in
 *Return : 0 Success
*/
int _putchar(char c)
{
  return(write(1, &c, 1));
}
