#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);

				if (x != '8' || (x == 8 && y != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
