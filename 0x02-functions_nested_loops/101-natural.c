#include<stdio.h>
#include"main.h"
/**
 * main -Entry program
 * Return:0 if true
 */
int main(void)
{
	int n, y = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
		y += n;
		}
		 n++;
	}
	printf("%d\n", y);
	return (0);

}
