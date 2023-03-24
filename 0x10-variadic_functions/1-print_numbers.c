#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - print numbers followed bya new line.
* @seperator: the string printed between numbers
* @n: the number of integers passed to the function
* @...: a variable of numbers to be printed
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int inidex;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(nums);
}
