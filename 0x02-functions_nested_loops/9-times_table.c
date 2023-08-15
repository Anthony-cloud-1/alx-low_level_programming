#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
	_putchar('0');	/* Print the leftmost '0' character */

	for (column = 1; column <= 9; column++)
	{
		_putchar(',');	/* Print the comma separator */
		_putchar(' ');	/* Print the space separator */

		result = row * column;

		/* Print tens digit if not zero */
		if (result < 10)
		_putchar(' ');
		else
		_putchar(result / 10 + '0');

		/* Print ones digit */
		_putchar(result % 10 + '0');
	}

	_putchar('\n');	/* Move to the next line */
	}
}
