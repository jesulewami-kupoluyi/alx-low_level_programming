#include"main.h"
/**
 * print_rev -print reversed strings
 * @s: character
 * Return:void
 */
void print_rev(char *s)
{
	int pn = 0;

	while (s[pn] != '\0')
		pn++;
	while (pn)
	_putchar(s[--pn]);
	_putchar('\n');
}
