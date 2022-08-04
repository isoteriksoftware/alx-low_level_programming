#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: count of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *hold;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(list, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
