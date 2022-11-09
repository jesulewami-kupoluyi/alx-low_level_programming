#include"main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int jos;

	for (jos = 0; jos < n; jos++)
	{
		dest[jos] = src[jos];
	}
	return (dest);
}
