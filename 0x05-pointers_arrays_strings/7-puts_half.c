#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	else if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
