#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		/*Do a recursive call if num >= 10*/
		/*to run the operation on the digits one by one*/
		print_number(num / 10);
	}
	/*Extracts last digit, converts to char equivalent*/
	_putchar((num % 10) + '0');
}
