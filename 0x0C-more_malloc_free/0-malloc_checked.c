#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size in bytes
 * Return: pointer to allocated memory (success)
 * or, status value of 98 (fail)
 */
void *malloc_checked(unsigned int b)
{
	/*a generic pointer that can point to any type of data*/
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
