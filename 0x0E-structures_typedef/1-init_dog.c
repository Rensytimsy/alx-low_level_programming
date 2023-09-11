#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog - is our main function
 *@d: is struct name
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
