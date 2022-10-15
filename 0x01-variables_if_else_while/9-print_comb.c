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

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
