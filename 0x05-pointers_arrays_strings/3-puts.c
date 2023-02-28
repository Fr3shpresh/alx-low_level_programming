#include "main.h"
#include <string.h>
/**
 * _puts - prints astring followed by a new line
 * @str: string to be printed
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
