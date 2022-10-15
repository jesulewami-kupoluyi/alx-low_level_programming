#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry function
 * Return:0 if true
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	if (n == 'e' || n == 'q')
	continue;
	putchar (n);
	putchar ('\n');
	return (0);

}
