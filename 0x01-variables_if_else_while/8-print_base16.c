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

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (n = 'a'; n <= 'f'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}
