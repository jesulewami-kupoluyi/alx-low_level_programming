#include"main.h"
/**
 * _print_rev_recursion -a function that reverses a string
 * @s: character value
 * return: positive value
 */
void _print_rev_recursion(char *s)
{
	char *s, n;

	for (n = s - 1; n >= 0; n--)
	{
		_putchar(_print_rev_recursion(n));
	}
	return (0);
}
