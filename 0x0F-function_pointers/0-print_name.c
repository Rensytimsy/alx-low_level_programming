#include "function_pointers.h"
/**
 *print_name - is our main function
 *@name: is a name passed as a parameter
 *@f: is a function(to a pointer )
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
