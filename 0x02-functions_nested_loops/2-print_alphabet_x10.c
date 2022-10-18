#include<unistd.h>
#include"main.h"
/**
 * print_alphabet_x10
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n * 10);

	}
	_putchar('\n');
}
