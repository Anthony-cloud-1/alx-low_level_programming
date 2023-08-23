#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;

	char chk[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char repl[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chk[j] != '\0'; j++)
		{
			if (s[i] == chk[j])
			{
				s[i] = repl[j];
				break;
			}
		}
	}
	return (s);
}
