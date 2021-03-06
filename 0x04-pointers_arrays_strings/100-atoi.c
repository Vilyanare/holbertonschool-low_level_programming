#include"holberton.h"
#include<stdio.h>
/**
 *_atoi - converts a string to an integer
 *@s: string to be converted
 *Return: the integer extracted from the string
 */
int _atoi(char *s)
{
	int num = 0, length = 0, x = 1, f = 1, c, end, start = -1;
	int minus = 0;

	while (s[length])
	{
		if (f == 0 && (s[length] < '0' || s[length] > '9'))
			break;
		if (s[length] == '-')
			minus++;
		if (f && s[length] >= '0' && s[length] <= '9')
		{
			start = length;
			f = 0;
		}
		length++;
		end = length - 1;
	}
	if (start >= 0)
	{
		length = end - start;
		for (c = 0; c <= length; c++)
		{
			if (minus % 2 != 0)
				num -= (s[end - c] - 48) * x;
			else
				num += (s[end - c] - 48) * x;
			if (c == 9)
				break;
			x *= 10;
		}
		return (num);
	}
	else
		return (0);
}
