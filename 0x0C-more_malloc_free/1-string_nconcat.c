#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string (part of it will be concatenated)
 * @n: first n bytes of s2 to be concatenated
 * Return: pointer to concatenated string (succes)
 * or NULL (failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0;
	char *p;

	/*get the length of the strings*/
	while ((s1 != NULL) && (s1[ln1] != '\0'))
		ln1++;
	while ((s2 != NULL) && (s2[ln2] != '\0'))
		ln2++;

	if (n >= ln2)
		p = malloc(sizeof(char) * (ln1 + ln2 + 1));
	else
		/*allocate memory for only first n bytes of s2*/
		p = malloc(sizeof(char) * (ln1 + n + 1));

	if (p == NULL)
		return (NULL);

	/*copy s1 to the new mem. loc.*/
	/*i would then be index of last element of s1 at the end*/
	while (i < ln1)
	{
		p[i] = s1[i];
		i++;
	}

	/**concatenate first n elements of s2 to p*/
	while (n < ln2 && i < (ln1 + n))
		p[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
