#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to dogs name
 * @age: dog's age
 * @owner: pointer to owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *pointrName_copy;
char *pointrOwner_copy;
int i, name_len, owner_len;
i = 0;
name_len = 0;
owner_len = 0;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
while ((name[name_len] != '\0') || (owner[owner_len] != '\0'))
{
if (name[name_len] != '\0')
{
name_len++;
}
else
{
owner_len++;
}
}

pointrName_copy = malloc(sizeof(char) * (name_len + 1));
pointrOwner_copy = malloc(sizeof(char) * (owner_len + 1));

if (pointrName_copy == NULL)
{
free(new_dog);
return (NULL);
}
    
if (pointrOwner_copy == NULL)
{
free(pointrName_copy);
free(pointrOwner_copy);
return (NULL);
}

for (; (i <= name_len) || (i <= owner_len); i++)
{
if (i <= name_len)
{
pointrName_copy[i] = name[i];
}
else
{
pointrOwner_copy[i] = owner[i];
}
}

new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
