#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
			
}
