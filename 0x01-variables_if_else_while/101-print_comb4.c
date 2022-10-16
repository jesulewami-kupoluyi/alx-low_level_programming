#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry function
 * Return:0 if true
 */
int main(void)
{
	int n;
	int m;
	int j;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m  < 9; m++)
		{
			for (j = m + 1; j < 10; j++)
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((j % 10) + '0');
			if (n == 7 && m == 8 && j == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
