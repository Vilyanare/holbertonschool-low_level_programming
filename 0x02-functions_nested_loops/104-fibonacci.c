#include<stdio.h>
/**
 *main - without using long long or malloc or pointers print fibonacci 98 times
 *Return: 0
 */
int main(void)
{
	int count;
	unsigned long int first = 0, first2 = 0, first3 = 0;
	unsigned long int second = 1, second2 = 2, second3 = 3;
	unsigned long int secondhold = 0;

	for (count = 0; count <= 97; count++)
	{
		if (first > 0)
			printf("%lu%lu\n", first, second);
		else
			printf("%lu\n", second);

		first = first2;
		first2 = first3;
		second = second2;
		second2 = second3;
		secondhold = second + second2;
		second3 = secondhold % 1000000000000000;
		first3 = ((first + first2) + (secondhold / 1000000000000000));
	}
	return (0);
}
