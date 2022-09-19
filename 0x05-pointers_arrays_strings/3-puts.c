#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */

void _puts(char *str)
{
	int put;

	for (put = 0; str[put] != '\0'; put++)
	{
		_putchar(str[put]);
	}

	_putchar('\n');

}
