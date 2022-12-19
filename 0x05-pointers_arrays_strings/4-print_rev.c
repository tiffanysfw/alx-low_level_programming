#include "main.h"

/**
 * print_rev - function to print string in reverve line
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
