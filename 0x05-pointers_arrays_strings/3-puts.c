#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 *
 * Return: always 0
 */

void _puts(char *str)
{
	for(; *str !='\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
