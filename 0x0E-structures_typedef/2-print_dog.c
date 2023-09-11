#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - is the main function
 *@d: is a pointer to structure dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("nil\n");
}
else if (d->owner == NULL)
{
printf("nil\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
