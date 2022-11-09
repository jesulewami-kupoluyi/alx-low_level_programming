#include"main.h"
/**
 * _strcpy -print variable
 * @dest: character
 * @src: character
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {

		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
