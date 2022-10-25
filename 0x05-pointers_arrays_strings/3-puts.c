#include"main.h"
/**
 * _puts -prints outstrings and newlines
 * @str: character
 * Return: output value of _put
 */
void _puts(char *str)
{
	char *pn = str;

	while (*pn != '\0')
		*pn++;
	_putchar('\n');

}
