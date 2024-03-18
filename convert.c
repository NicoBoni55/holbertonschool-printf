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
	int array[10];
	int i, cifra, numero, sum = 0, j = 0;

	numero = va_arg(c, int);

	cifra = 1000000000;

	array[0] = numero / cifra;
	for (i = 1; i < 10; i++)
	{
		cifra /= 10;
		array[i] = (numero / cifra) % 10;
	}
	if (numero < 0)
	{
		_write('-');
		j++;
		for (i = 0; i < 10; i++)
			array[i] *= -1;
	}
	for (i = 0; i < 10; i++)
	{
		sum += array[i];
		if (sum != 0 || i == 9)
		{
			_write(array[i] + '0');
			j++;
		}
	}
	return (j);
}
