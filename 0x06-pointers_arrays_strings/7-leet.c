#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char chk[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == chk[j])
			{
				s[i] = repl[j];
			}
		}
	}
	return (s);
}
