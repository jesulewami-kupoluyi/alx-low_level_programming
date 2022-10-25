#include"main.h"
/**
 * _strcpy -print variable
 * @dest: character
 * @src: character
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pn = dest;

	while (*src)
		*dest++ = *src++;
	return (pn);
}
