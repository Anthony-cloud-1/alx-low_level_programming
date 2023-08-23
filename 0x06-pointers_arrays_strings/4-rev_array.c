#include "main.h"
/**
 * reverse_array - Reverses the content of an array of int
 * @a: the array to be revered
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	/*n-1 because array indice start from 0*/
	/*n-i denoting the previous element*/

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

