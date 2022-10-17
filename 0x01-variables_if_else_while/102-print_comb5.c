#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry function
 * Return:0 if true
 */
int main(void)
{
	int x, y, z, q;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (q = 48; q <= 57; q++)
				{
				if (((z + q) > (x + y) && z >= x) || x < z)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(q);
					if (x + y + z + q == 227 && x == 555557)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
