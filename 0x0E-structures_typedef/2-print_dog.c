#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * *d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if ((d->name == NULL) || (d->owner == NULL))
{
if (d->name == NULL)
{
d->name = "nil";
}
else
{
d->owner = "nil";
}
}
printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
