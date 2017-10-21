#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdlib.h>
#include<stdarg.h>
#include<stdio.h>

/**
 *struct formatspecifier - format decider
 *@fmt: format character
 *@f: function to do with said format
 */
typedef struct formatspecifier
{
	char *fmt;
	void (*f)(va_list);
} fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *sparator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
