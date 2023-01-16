#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all the values for the struct
 * @d:struct for dog
 *
 * Return: nothing but to display all the values for the struct elements.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
