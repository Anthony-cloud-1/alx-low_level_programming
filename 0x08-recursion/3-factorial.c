#include "main.h"
/**
 * factorial - calculates the factorial of a num
 * @n: the num to be operated on
 * Return: the factorial OR
 * -1 (error) when n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
