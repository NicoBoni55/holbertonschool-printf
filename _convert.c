#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

	_write(stat[0]);
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
	int i;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i]; i++)
	{
		_write(s[i]);
	}
	return (s);
}

/**
*convert_int - cambia de dato int a string;
*@c: lista de parametros de donde sacar el int;
*
*Return: retorna el int como tipo de dato string (char *)
* -2,147,400,000 a 2,147,400,000
*/
char *convert_int(va_list c)
{
	int numero, temp, contador, i;
	char *numeroChar;

	numero = va_arg(c, int);

	temp = numero < 0 ? -numero : numero;
	contador = numero < 0 ? 1 : 0;

	while (temp != 0)
	{
		temp /= 10;
		contador++;
	}

	numeroChar = malloc((contador + 1) * sizeof(char));
	if (numeroChar == NULL)
	{
		return (NULL);
	}
	numeroChar[contador] = '\0';
	temp = numero < 0 ? -numero : numero;
	
	if (numero < 0)
	{
		numeroChar[0] = '-';
	}

	for (i = contador - 1; temp != 0; i--)
	{
		numeroChar[i] = (temp % 10 + '0');
		temp /= 10;
	}

	for (i = 0; numeroChar[i]; i++)
	{
		_write(numeroChar[i]);
	}
	return (numeroChar);
}
