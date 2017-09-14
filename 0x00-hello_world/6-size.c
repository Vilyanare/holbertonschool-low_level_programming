#include<stdio.h>
/**
 *main - displays the size of different data types
 *Return: returns nothing
 */
int main(void)
{
	int integertype;
	float floattype;
	char chartype;
	long int longinttype;
	long long int longlonginttype;

	printf("Size of a char: %ld byte(s)\n", sizeof(chartype));
	printf("Size of int: %ld byte(s)\n", sizeof(integertype));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %ld byte(s)\n", sizeof(floattype));
	return (0);
}
