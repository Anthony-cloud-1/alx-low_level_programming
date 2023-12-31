#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 characters
 * Return: The converted number, or 0 if there's an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = (result << 1) + (b[index] - '0');
		index++;
	}

	return (result);
}
