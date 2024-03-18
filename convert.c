#include "main.h"
#include <limits.h>
#include <stdarg.h>

/**
 * convert_char - convert character to string
 * @c : character
 *
 * Return: string
 */
int convert_char(va_list c)
{
	char s = va_arg(c, int);

	_write(s);
	return (1);
}

/**
*convert_string - verificar el string y retornarlo
*@c: lista de parametros de donde sacar el string
*
*Return: string
*/

int convert_string(va_list c)
{
	char *s = va_arg(c, char *);

	int i;

	s = s == NULL ? "(null)" : s;

	for (i = 0; s[i]; i++)
	{
		_write(s[i]);
	}
	return (i);
}

/**
*convert_int - cambia de dato int a string;
*@c: lista de parametros de donde sacar el int;
*
*Return: retorna el int como tipo de dato string (char *)
* -2,147,400,000 a 2,147,400,000
*/
int convert_int(va_list c)
{
	int numero, cifras;
	int i;
	i = 0;
	cifras = 1;

	numero = va_arg(c, int);

	if (numero < 0)
	{
		_write('-');
		i++;
		numero = -numero;
	}
	while (cifras <= numero / 10)
	{
		cifras *= 10;
	}

	while (cifras > 0)
	{
		_write((numero / cifras) + '0');
		i++;
		numero %= cifras;
		cifras /= 10;
	}

	return (i);
}
