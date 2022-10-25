#include"main.h"
/**
 * puts2 -prints out even numbers strating from 0
 * @str:character
 * Return:void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
