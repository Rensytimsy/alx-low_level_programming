#include <string.h>
#include "main.h"
/**
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int a,b,c,end;
a = 0;
for(b = 0; s[b] != '\0'; b++)
{
end = 0;
for(c = 0; accept[c] != '\0'; c++)
{
if(s[b] == accept[c])
{
a++;
end = 1;
}
}
if(end == 0)
{
return (a);
}
}
return(0);
}
