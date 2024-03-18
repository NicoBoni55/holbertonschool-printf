#include "main.h"
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
 *printINT - imprime un numero
 *@num: numero a imprimir;
 *
 *Return: cantidad de cifras impresas;
 */

int printINT(int num)
{
	int numero;
	char numeroChar;

	if (num == 0)
	{
		return (0);
	}

	numero = printINT(num / 10);

	numeroChar = (num > 0) ? ((num % 10) + '0') : (-(num % 10) + '0');

	_write(numeroChar);

	numero++;

	return (numero);
}

/**
*convert_int - cambia de dato int a string;
*@c: lista de parametros de donde sacar el int;
*
*Return: retorna el int como tipo de dato string (char *)
*/
int convert_int(va_list c)
{
	int numero = va_arg(c, int);
	int j = 0;

	if (numero == 0)
	{
		_write('0');
		return (1);
	}

	j = (numero < 0) ? _write('-'), (printINT(numero)) + 1 : printINT(numero);
	return (j);
}
