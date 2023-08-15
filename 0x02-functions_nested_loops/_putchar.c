#include <unistd.h>
/**
 * write - is used to print any charcter passed in as a parameter
 * Return: Success will be one and errot -1
 *
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
