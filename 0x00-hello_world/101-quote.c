#include<stdio.h>
#include<unistd.h>
/**
 * main - this function prints an output string
 * Return: 1 if the output is valid if not echo 2
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
