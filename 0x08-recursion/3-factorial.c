#include"main.h"
/**
 * factorial -function prints factorial of a given variable
 * @n: integar value
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return ( n * factorial(n - 1));
}
