#include <unistd.h>

int _strlen(char *s)
{
return(write(1, &s, 1));
}
