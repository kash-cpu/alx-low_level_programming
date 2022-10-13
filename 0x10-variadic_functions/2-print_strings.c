#include "variadic_functions.h"

/**
 *  print_strings - Print strings
 *  @separator: String beetween numbers
 *  @n: Number of arguments
 *  Return return type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mynumbers;

	unsigned int i;
	char *args;

	va_start(mynumbers, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(mynumbers, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(mynumbers);
}
