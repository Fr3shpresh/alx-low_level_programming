#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: memot=ry where it is stored
 * @src: memory where is copied
 * @n: number of byte
 *
 * Return: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
