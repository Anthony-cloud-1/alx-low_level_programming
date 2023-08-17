#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	 while (n / divisor)
		divisor *= 10;

	while (divisor > 1)
	{
		divisor /= 10;
		_putchar((n / divisor) % 10 + '0');
	}

	_putchar(n % 10 + '0');
}
