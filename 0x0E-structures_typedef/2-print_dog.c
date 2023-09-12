#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog.
 * @d: pointer to 'struct dog' to be printed
 */
void print_dog(struct dog *d)
{
	/*do nothing if memory isn't allocated for d*/
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
