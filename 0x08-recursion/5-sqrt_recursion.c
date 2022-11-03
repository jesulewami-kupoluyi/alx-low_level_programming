#include"main.h"
/**
 * _sqrt_recursion - function prints square root of a given number
 * @n: integar
 * Return: void
 */
int _sqrt_recursion(int n)
{
	int xy = 1;

	if (xy * xy <= n && (xy + 1) * (xy + 1) > n)
	{
		return (xy);
	}
	else
	{
		xy = (xy + n / xy) / 2;
		return (_sqrt_recursion(n));
	}
}
