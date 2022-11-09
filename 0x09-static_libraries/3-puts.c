#include"main.h"
/**
 * _puts -prints outstrings and newlines
 * @str: character
 * Return: output value of _put
 */
void _puts(char *str)
{
	int pn = 0;

	while (str[pn] != '\0')
	{
	_putchar(str[pn]);
		pn++;
	}
	_putchar('\n');

}
