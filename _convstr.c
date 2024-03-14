#include "main.h"
/**
 * convstr - convert character to string
 * @c : character
 *
 * Return: string
 */
char *convstr(va_list c)
{
	char stat[2];
	char *s;

	stat[0] = va_arg(c, int);
	stat[1] = '\0'
	s = stat;

	return (s);
}
