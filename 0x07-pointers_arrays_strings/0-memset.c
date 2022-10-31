#include"main.h"
/**
 * *_memset - memory with a constant byte.
 * @s: character
 * @b: character
 * @n: integar
 * Return:pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int jos;

	for (jos = 0; n > 0; jos++, n--)
	{
		s[jos] = b;
	}
	return (s);
}
