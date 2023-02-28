#include "main.h"
/**
 * print_rev - prints a string in reverse followd by a new line
 * @s: string to be printed
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}

	_putchar('\n');
}
