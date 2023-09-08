#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point, multiplies 2 positive nums.
 * @argc: Number of arg.
 * @argv: Array of arg.
 * Return: 0 if successful, 98 for incorrect number of arguments or non-digit input.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];
	/*Check if num1_str and num2_str contain only digits*/
	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	/*Convert num1_str and num2_str to integers*/
	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	/*Calculate the product*/
	int product = num1 * num2;

	/*Print the result*/
	printf("%d\n", product);

	return (0);
}
/**
 * is_positive_integer - Check if a string contains only digits.
 * @str: The string to check.
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
