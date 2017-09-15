#include<stdio.h>
/**
 *main - output lowercase alphabet without using puts or printf
 *Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
