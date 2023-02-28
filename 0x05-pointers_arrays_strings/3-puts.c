#include "main.h"
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
		putchar(*str);
	}
	putchar('\n');
}
