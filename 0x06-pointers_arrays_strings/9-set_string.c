#include"holberton.h"
/**
 *set_string - sets value of a pointer to a char
 *@s: pointer to change value of
 *@to: value to change s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
