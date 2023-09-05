#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes it with a char
 * @size: size of the arrray it creates
 * @c: char to be passed to the new array
 *
 * Return: a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		/*a NULL pointer*/
		return (NULL);
	}

	ptr = (char *) malloc(sizeof(char) * size);

	/*returns NULL on memory allocation fail*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
