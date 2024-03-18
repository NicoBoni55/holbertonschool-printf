#include "main.h"
#include <unistd.h>


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
 * _write - writes the character to stdout
 * @s: string
 *
 * Return: 1 is success
 */
int _write(char s)
{
	return (write(1, &s, 1));
}
