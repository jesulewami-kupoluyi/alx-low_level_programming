#include"main.h"
/**
 * _strncat - Concatenates two strings using at most
 * @dest: A string.
 * @src: A string.
 * @n:An integar.
 * Return: A pointer dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
