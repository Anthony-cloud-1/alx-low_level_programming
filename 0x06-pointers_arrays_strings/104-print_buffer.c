#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer to print.
 * @size: Size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
	}

		for (k = i; k < i + 10; k++)
		{
			if (k < size && b[k] >= 32 && b[k] <= 126)
				printf("%c", b[k]);
			else if (k < size)
				printf(".");
			else
				break;
		}

		printf("\n");
	}
}
