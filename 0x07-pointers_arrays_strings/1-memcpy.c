#include "main.h"
/**
 * _memcpy - functions that copy memory area
 * @dest: memory dstination
 * @src: memory source
 * @n: integer
 * Return: alwayss 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r]
		n--;
	}
	return (dest);
}
