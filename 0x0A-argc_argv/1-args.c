#include <stdio.h>
/**
 * main - Program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success, any other int otherwise
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
