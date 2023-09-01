#include "main.h"

/**
 * _strncat - concatenates one string to another, using n bytes
 * @dest: destination string
 * @src: source string
 * @n: num. of bytes from src to be used
 *
 * Return: a pointer to the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
