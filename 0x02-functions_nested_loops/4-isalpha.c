#include"main.h"
/**
 * _isalpha -Entry program
 * @c: integar
 * Return:1 if true otherwise 0
 */
int _isalpha(int c)
{
	int result = 0;
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == c)
		 result = 1;
	}
	return (result);
}
