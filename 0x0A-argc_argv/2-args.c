#include <stdio.h>
/**
 * main - Program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success, any other int otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
