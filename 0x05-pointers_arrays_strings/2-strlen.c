#include"main.h"
/**
 * _strlen - prints the length of a string
 * @s:character
 * Return:pn - s
 */
int _strlen(char *s)
{
	char *pn = s;

	while (*pn != '\0')
		pn++;
	return (pn - s);
}
