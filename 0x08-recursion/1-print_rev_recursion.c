#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reverse-printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		/*Next line is executed only when *s points*/
		/*... to the last character of the string*/
		_putchar(*s);
	}
}
