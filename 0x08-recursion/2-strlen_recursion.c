#include "main.h"
/**
 * _strlen_recursion - reverses the length of sa string
 * @s: string to be reversed
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
