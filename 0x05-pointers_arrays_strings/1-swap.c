#include"main.h"
/**
 * swap_int - for swaping integar values
 * @a: integar
 * @b:integar
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
