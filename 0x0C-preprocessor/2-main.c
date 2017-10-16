#include<stdio.h>
/**
 *main - prints file that program was compiled in
 *Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
