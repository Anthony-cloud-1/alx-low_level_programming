#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a char in a string
 * @s: string to search in
 * @c: char to find
 * Return: a pointer to the first occurrence of the char
 * c in the string s, or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
