#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type "struct dog".
 * Assigns the passed values to the members of 'struct dog' instance
 * pointed to by 'd'.
 *
 * @d: pointer to the struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*Memory allocated for 'struct dog' instance, d?*/
	/*allocate memory otherwise*/
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	/*assign the passed values to the respective members of the*/
	/* struct dog instance pointed to by d*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
