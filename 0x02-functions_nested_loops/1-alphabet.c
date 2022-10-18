#include "main.h"
#include<unistd.h>
/**
 * print_alphabet -Entry program.
 * Return:void.
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
