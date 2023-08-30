#include "main.h"
/**
 * _recursion - finds the natural square root
 * @n: number to be a operated
 * @i: iterator
 *
 * Return: reulting square root
 */
int _recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - calc. natural square root of a number
 * @n: number to be operated on
 * Return: the natural square root OR
 * -1 if the num has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_recursion(n, 0));
}
