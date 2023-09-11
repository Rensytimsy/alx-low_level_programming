#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - is our main function
 * @d: is pointer to dog_t
 **/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
