#include"main.h"
/**
 * print_sign -Entry program
 * @n: integar
 * Return: 1 if true otherwise 0
 */
int print_sign(int n)
{
	if (n >= 'a' && n <= 'z')
	{
		return (1);
	}
	else if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
