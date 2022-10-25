#include"main.h"
/**
 * rev_string -reveres string output
 * @s:character
 * Return:void
 */
void rev_string(char *s)
{
	int pn = 0, px = 0;
	char py;

	while (s[pn] != '\0')
		pn++;

	while (px < pn--)
	{
		py = s[px];
		s[px++] = s[pn];
		s[pn] = py;
	}
}
