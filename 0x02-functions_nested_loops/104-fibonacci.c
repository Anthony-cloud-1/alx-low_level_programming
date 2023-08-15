#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int be = 1;
	unsigned long int af = 2;
	unsigned long int l = 1000000000;
	unsigned long int be1;
	unsigned long int be2;
	unsigned long int af1;
	unsigned long int af2;

	printf("%lu", be);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", af);
		af += be;
		be = af - be;
	}

	be1 = (be / l);
	be2 = (be % l);
	af1 = (af / l);
	af2 = (af % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", af1 + (af2 / l));
		printf("%lu", af2 % l);
		af1 = af1 + be1;
		be1 = af1 - be1;
		af2 = af2 + be2;
		be2 = af2 - be2;
	}

	printf("\n");
	return (0);
}
