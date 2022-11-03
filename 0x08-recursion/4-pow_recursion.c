#include"main.h"
/**
 * _pow_recursion -function prints the result
 * of two values raised to  power of the other
 * @x: integar
 * @y: integar
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y > 0)
	{
		z = x * x;
		return (_pow_recursion(x, y));
	}
	else
		(y < 0)
		{
			return (-1);
		}
}
