#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be processed.
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
