#include<unistd.h>
#include"main.h"
/**
 * print_alphabet_x10 -Entry program
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);

	}
	_putchar('\n');
}
