#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: string to be printed
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}

	for (i = 0; i < count; i++)
		str--;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}

	putchar('\n');
}
