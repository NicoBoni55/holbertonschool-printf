#include "main.h"
#include <unistd.h>
/**
 * _stamp - returns the length of a string and print
 * @s: string
 *
 * Return: lenght of a string
 */
int _stamp(char *s)
{
	int i = 0;

	while (s[i])
	{
		_write(s[i]);
		i++;
	}
	return (i);
}
/**
 * _write - writes the character to stdout
 * @s: string
 *
 * Return: 1 is success
 */
int _write(char s)
{
	return (write(1, &s, 1));
}
