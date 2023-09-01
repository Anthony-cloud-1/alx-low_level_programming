#include "main.h"
#include <string.h>

/**
 * _atoi - converts a string to an int
 * @s: the string
 *
 * Return: the converted string
 */
int _atoi(char *s)
{
	int i, a, b, len, f, num;

	i = 0;
	a = 0;
	b = 0;
	f = 0;
	num = 0;
	len = strlen(s);

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (a % 2)
				num = -num;
			b = b * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (b);
}
