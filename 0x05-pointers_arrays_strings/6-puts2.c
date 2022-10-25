#include"main.h"
/**
 * puts2 -prints out even numbers strating from 0
 * @str:character
 * Return:void
 */
void puts2(char *str)
{
	int pn = 0, px = 0;

	while (str[pn++])
		px++;

	for (pn = 0; pn < px; pn += 2)
		_putchar(str[pn]);
		_putchar('\n');
}
