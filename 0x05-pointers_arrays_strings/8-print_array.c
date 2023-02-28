#include "main.h"
/**
 * print_array - prints an array of integers
 * @a: array to be printed
 * @n: number of elements in array
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putcharO('\n');
}
