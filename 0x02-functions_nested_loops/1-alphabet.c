#include<stdio.h>
#include "main.h"
/**
 * main -Entry program.
 * Return:0 if true.
 */
void print_alphabet(void);
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
