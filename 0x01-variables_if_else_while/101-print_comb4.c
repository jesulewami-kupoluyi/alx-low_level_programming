#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry function
 * Return:0 if true
 */
int main(void)
{
	int n, m, j;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m  <= '9'; m++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (n < m && m < j)
				{
					putchar(n);
					putchar(m);
					putchar(j);
					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
