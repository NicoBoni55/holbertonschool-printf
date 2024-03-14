#include "main.h"
/**
 * main - print the number of n
 *
 * Return: Always (success)
 *
 */
char strequ(va_list c)
{
	char *s = va_arg(c, int*);

	if (va_arg(c, int*) == NULL)
	{
		return (NULL);
	}
	return (s);	
}
