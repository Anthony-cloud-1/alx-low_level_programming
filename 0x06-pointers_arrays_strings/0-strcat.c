#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
