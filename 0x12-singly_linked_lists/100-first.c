#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

void first(void) __attribute__ ((constructor));

/**
 * first - prints a string literal before main() is executed
 * Return: void.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
