#include "main.h"

/**
 * _puts_rev_recursion - Prints a string in reverse
 * @s: the string to reverse
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
