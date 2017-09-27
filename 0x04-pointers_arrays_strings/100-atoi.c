#include"holberton.h"
#include<stdio.h>
/**
 *_atoi - converts a string to an integer
 *@s: string to be converted
 *Return: the integer extracted from the string
 */
int _atoi(char *s)
{
	int num = 0, length = 0, x = 1, f = 1, c, end, start;
	int minus = 0, plus = 0;

	while(s[length])
	{
		if (s[length] == '-')
			minus++;
		if (s[length] == '+')
			plus++;
		if (f && s[length] >= '0' && s[length] <= '9')
		{
			start = length;
			f = 0;
		}
		if (f == 0 && (s[length] < '0' || s[length] > '9'))
		{
			break;
		}
		length++;
		end = length - 1;
	}
	length = end - start;
	for (c = 0; c <= length; c++)
	{
		num += (s[end - c] - 48) * x;
		x *= 10;
	}
	if (minus > plus)
		num = num - num - num;
	return (num);
}
