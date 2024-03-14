#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * convstr - convert character to string
 * @c : character
 *
 * Return: string
 */
char *convert_char(va_list c)
{
	char stat[2];
	char *s;

	stat[0] = va_arg(c, int);
	stat[1] = '\0';
	s = stat;

	return (s);
}

/**
*convert_string - verificar el string y retornarlo
*@c: lista de parametros de donde sacar el string
*
*Return: string
*/

char *convert_string(va_list c)
{
	char *s = va_arg(c, char *);

	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}

/**
*convert_int - cambia de dato int a string;
*@c: lista de parametros de donde sacar el int;
*
*Return: retorna el int como tipo de dato string (char *)
*/

char *convert_int(va_list c)
{
/* yo pase con 10 MATEMATICS*/
}

/**
*convert_parcent - retorno un %
*
*Return: retorna un %
*/

char *convert_parcent(void)
{
	char *s;
	s = "%";
	return (s);
}
