#include "main.h"
#include <unistd.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return(i);
}
/**
 * _write - writes the character to stdout
 * @s: string
 * @i: length
 *
 * return: 1 is success
 */
int _write(char s)
{
	return (write(1, &s, 1));
}
