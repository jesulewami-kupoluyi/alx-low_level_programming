#include<unistd.h>
#include"main.h"
/**
 * _islower -Entry program
 * @c:integar value
 * Return: 1 if true otherwise 0
 */
int _islower(int c)
{
	char n;
	int result = 0;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == c)
		result = 1;
	}
	return (result);
}
