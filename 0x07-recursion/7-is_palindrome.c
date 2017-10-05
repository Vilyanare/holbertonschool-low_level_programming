#include"holberton.h"
/**
 *endofstring - find end of string
 *@s: string to find end of
 *Return: length of string
 */
int endofstring(char *s)
{
	if (*s != 0)
		return (1 + endofstring(s + 1));
	else
		return (0);
}

/**
 *palin - compares end of string to begining for palindrome
 *@s:string to check
 *@p: pointer to end of string
 *Return: 1 if palindrome
 */
int palin(char *s, char *p)
{
	if (*s == *p)
		return(palin (s + 1, p - 1));
	if (s > p)
		return (1);
	else
		return (0);
}
/**
 *is_palindrome - recursively checks if string is a palindrome
 *@s: string to check
 *Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	char *p = s;
	int x;

	x = endofstring(s) - 1;
	return (palin(s, p + x));
}
