#include "main.h"

/**
 * _strlen_recursion - a function that string
 * @s:input string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
