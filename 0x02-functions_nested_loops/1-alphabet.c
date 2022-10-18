#include "main.h"
#include<unistd.h>
/**
 * main -Entry program.
 * Return:0 if true.
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
