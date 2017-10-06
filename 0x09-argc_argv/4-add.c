#include "holberton.h"
#include <stdio.h>
/**
 *notdigit - find first byte from string 1 that isn't a digit
 *then return that position
 *@s: string to look through
 *Return: pointer to the first matching byte
 */
int notdigit(char *s)
{
	int x, c;
	char accept[] = "0123456789";

	for (x = 0; s[x]; x++)
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[x] == accept[c])
				break;
			if (s[x] != accept[c] && c == 9)
				return (1);
		}
	}
	return (0);
}
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
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument array
 *Return: 1 if an argument contains non digits
 */
int main(int argc, char *argv[])
{
	int sum = 0, x;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (notdigit(argv[x]))
		{
			printf("Error\n");
			return (1);
		}
		sum += (_atoi(argv[x]));
	}
	printf("%d\n", sum);
	return (0);
}
