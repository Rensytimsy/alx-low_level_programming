#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Dog
 *@name: is the first element in the struct
 *@owner: is the second element in the struct
 *@age: is the third element in the struct
 */

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
