#include "holberton.h"
/**
 *startrav - skips * looking for new char
 *@s: string to travel
 *Return: positions to move pointer
 */
int startrav(char *s)
{
	if (*s == '*')
		return (1 + startrav(s + 1));
	else
		return (0);
}
/**
 *charcomp - compares a char to a string to find position of next char
 *@c: char to compare
 *@s: string to find char in
 *Return: spots to move to get to char in string
 */
int charcomp(char c, char *s)
{
	if (*s == 0)
		return (0);
	if (c != *s)
		return (1 + charcomp(c, s + 1));
	else
		return (0);
}
/**
 *starrevtrav - travels backwards along string to find char after previous *
 *@s: string to traverse
 *Return: number of spots to go back
 */
int starrevtrav(char *s)
{
	if (*s != '*')
		return (1 + starrevtrav(s - 1));
	else
		return (-1);
}
/**
 *wildcmpf - called after a * is found
 *@s1: first string
 *@s2: string to compare with s1
 *Return: 1 if the same 0 if not
 */
int wildcmpf(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2 += startrav(s2);
		s1 += charcomp(*s2, s1);
		return (wildcmpf(s1, s2));
	}
	if (*s1 != *s2 && *s1 != 0)
	{
		s2 -= starrevtrav(s2);
		s1 += charcomp(*s2, s1);
		if (*s1 == 0)
			return (0);
	}
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmpf(s1 + 1, s2 + 1));
	else
		return (0);
}
/**
 *wildcmp - compares two strings with recursion
 *may contain wild cards
 *@s1: first string
 *@s2: string to compare with s1
 *Return: 1 if the same 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2 += startrav(s2);
		s1 += charcomp(*s2, s1);
		return (wildcmpf(s1, s2));
	}
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
