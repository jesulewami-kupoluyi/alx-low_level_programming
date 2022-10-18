#include<unistd.h>
/**
 * main -Entry program
 * Return:on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
