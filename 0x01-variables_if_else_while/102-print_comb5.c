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

	for (n = 0; m <= 99; n++)
		for (n = m; m <= 99; m++)
		{
		if (n != m)
			{
			putchar(m / 10 + 48);
			putchar((m % 10 + 48);
			putchar(',');
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			}
			{
			if (m * 100 + n != 9899)
			putchar(',');
			putchar(' ');
			}
			}	
		}
	}
	putchar('\n');
	return (0);
}
