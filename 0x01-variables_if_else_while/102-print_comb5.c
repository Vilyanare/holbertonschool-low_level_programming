#include<stdio.h>
/**
 * main - print unique combo of 2 groups of 2 digit numbers
 *(00 01, 01 00, 10 00, are not unique)
 *Return: always 0
 */
int main(void)
{
    int ch, ch2, ch3, ch4;

    for (ch = 48; ch <= 57; ch++)
    {
	for (ch2 = 48; ch2 <= 57; ch2++)
	{
	    for (ch3 = 48; ch3 <= 57; ch3++)
	    {
		for (ch4 = 48; ch4 <= 57; ch4++)
		{
		    if (ch4 >= ch2 && ch3 >= ch)
		    {
			if (ch4 != ch2 || ch3 != ch)
			{
			    putchar(ch);
			    putchar(ch2);
			    putchar(' ');
			    putchar(ch3);
			    putchar(ch4);
			    if (ch != 57 || ch2 != 56 || ch3 != 57 || ch4 != 57)
			    {
				putchar(',');
				putchar(' ');
			    }
			}
		    }
		}
	    }
	}
    }
    putchar('\n');
    return (0);
}
