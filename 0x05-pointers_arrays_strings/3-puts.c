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

	while (str[put] != '\0')
	{
		_putchar(str[put]);
		put++;
	}

	_putchar("\n");

}
