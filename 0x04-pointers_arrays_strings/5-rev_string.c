#include"holberton.h"
/**
 *rev_string - reverses input string stores in
 *same pointer
 *@s: input string to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	char temp[sizeof(s) + 2];
	int c, x, i = 0;

	for (c = 0; s[c]; c++)
		;
	x = c;
	for ( ; x > 0; x--)
	{
		temp[i] = s[x];
		i++;
	}
	x = c;
	for (i = 0 ; x > 0; x--)
	{
		s[i] = temp[i + 1];
		i++;
	}
}
