#include"holberton.h"
/**
 *rev_string - reverses input string stores in
 *same pointer
 *@s: input string to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	char temp = 0;
	int x, c;

	for (x = 0; s[x]; x++)
		;
	x--;
	for (c = 0; c < x; c++)
	{
		temp = s[c];
		s[c] = s[x];
		s[x] = temp;
		x--;
	}
}
/**
 *str_count - count size of a string
 *@s: string to be counted
 *Return: string size
 */
int str_count(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
/**
 *infinite_add - adds two numbers
 *@n1:string to add
 *@n2:string to add
 *@r:buffer to store sum at
 *@size_r:size of buffer
 *Return: pointer to sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1c, n2c, x, carry, result;

	carry = 0;
	n1c = str_count(n1);
	n2c = str_count(n2);
	if (n1c >= size_r)
		return (0);
	n1c--;
	n2c--;
	for (x = 0; x < size_r; x++)
	{
		if (n1c >= 0 && n2c >= 0)
			result = (n1[n1c] - 48) + (n2[n2c] - 48) + carry;
		else if (n1c > n2c)
			result = (n1[n1c] - 48) + carry;
		else if (n2c > n1c)
			result = (n2[n2c] - 48) + carry;
		else
			break;
		if ((n1c >= 0 && n2c >= 0) || n1c > n2c)
			n1c--;
		if ((n1c >= 0 && n2c >= 0) || n1c < n2c)
			n2c--;
		r[x] = result % 10 + 48;
		carry = result / 10;
		if (carry && x + 2 == size_r)
			return (0);
	}
	if (carry)
	{
		r[x] = carry + 48;
		r[x + 1] = '\0';
	}
	else
		r[x] = '\0';
	rev_string(r);
	return (r);
}
