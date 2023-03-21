#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* new_dog - create a new dog
*@name: char
*@age: float
*@owner: char
*
*Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
unsigned int i;
int nameLen, ownLen;
nameLen = strlen(name);
ownLen = strlen(owner);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = malloc(nameLen + 1);
if (d->name == NULL)
{
free(d);
free(d->name);
return (NULL);
}
d->owner = malloc(ownLen + 1);
if (d->owner == NULL)
{
free(d);
free(d->name);
free(d->owner);
return (NULL);
}
for (i = 0; i < strlen(name); i++)
d->name[i] = name[i];
d->name[i] = '\0';
d->age = age;
for (i = 0; i < strlen(owner); i++)
d->owner[i] = owner[i];
d->owner[i] = '\0';
return (d);
}
