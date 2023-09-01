#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 - success, any other int otherwise
 */
int main(int argc, char *argv[])
{
	int num, i, j, result = 0;
	char *s;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			s = argv[i];
			j = 0;
			while (s[j] != '\0')
			{
				if (s[j] < '0' || s[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			/*The summation*/
			result = result + num;
		}
		printf("%d\n", result);
	}
	/*If no argument passed*/
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
