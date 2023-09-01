#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the result of the comparison:
 * 0 - s1 = s2
 * -ve value - s1 < s2
 *  +ve value s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int ans  = 0;

	/*Check ASCII value of each char for s1 and s2*/
	/*in each iteration - basis of comparison*/
	/*If s1 gets to \0 first, it means they're not equal*/
	while (*s1 == *s2 && *s1 != '\0')
	{
		s2++;
		s1++;
	}
	if (s1 != s2)
		ans = *s1 - *s2;

	return (ans);
}
