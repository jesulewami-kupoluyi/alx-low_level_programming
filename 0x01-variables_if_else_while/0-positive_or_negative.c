#include<stdlib.h>
#include<time.h>
/**
 * main -the program execute a function
 * Return:the function returns the result
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n", n);
	}
	else if (n == 0)
	{
		printf("%dis zero%\n", n);
	}
	else(n < o)
	{
		printf("%dis negative\n", n);
	}

	return (0);
}
