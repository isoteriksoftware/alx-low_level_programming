#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_str(char *s);

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, hasprint = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", (int)va_arg(args, int));
				hasprint = 1;
				break;
			case 'c':
				printf("%c", (char)va_arg(args, int));
				hasprint = 1;
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				hasprint = 1;
				break;
			case 's':
				print_str((char *)va_arg(args, char *));
				hasprint = 1;
				break;
			default:
				hasprint = 0;
				break;
		}
		i++;
		if (format[i] && hasprint)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

/**
 * print_str - prints a str
 * @s: pointer to str
 */
void print_str(char *s)
{
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
