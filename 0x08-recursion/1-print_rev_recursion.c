#include"main.h"
#include<string.h>
/**
 * _print_rev_recursion -a function that reverses a string
 * @s: character value
 * return: positive value
 */
void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	int mid = length / 2;
	char temp;

	for (int i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
