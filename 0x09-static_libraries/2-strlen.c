#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of a string
 * @s: string whose length is to be found
 * Return:  returns the length of @s
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
