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
	putchar (n);
	for (n = 'A'; n <= 'Z'; n++)
	putchar (n);
	putchar ('\n');
	return (0);
}
