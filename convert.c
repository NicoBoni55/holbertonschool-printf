#include "main.h"
#include <limits.h>

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
	int numero, temp, contador, i;
	char *numeroChar;

	numero = va_arg(c, int);
	if (numero == 0)
	{
		_write('0');
		return (1);
	}
	if (numero == INT_MIN)
		temp = -(numero + 1) + 1;
	else
		temp = numero < 0 ? -numero : numero;

	contador = numero < 0 ? 1 : 0;

	while (temp != 0)
	{
		temp /= 10;
		contador++;
	}
	numeroChar = malloc((contador + 1) * sizeof(char));
	if (numeroChar == NULL)
		return (0);

	numeroChar[contador] = '\0';
	if (numero == INT_MIN)
		temp = -(numero + 1) + 1;
	else
		temp = numero < 0 ? -numero : numero;
	if (numero < 0)
		numeroChar[0] = '-';
	for (i = contador - 1; temp != 0; i--)
	{
		numeroChar[i] = (temp % 10 + '0');
		temp /= 10;
	}
	i = _stamp(numeroChar);
	free(numeroChar);
	return (i);
}
