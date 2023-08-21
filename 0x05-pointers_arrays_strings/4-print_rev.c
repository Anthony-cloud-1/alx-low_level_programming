#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length - 1; i >= 0; --i)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
