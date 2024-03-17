#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
*_printf - imprime una cadena de texto, segun los parametros dados
*@format: string a imprimir;
*
*Return: retonra la cantidad de chars imprsos
*/

int _printf(const char *format, ...)
{
	int i = 0, contador = 0;
	va_list parametro;
	int (*fun)(va_list);

	if (format == NULL)
		return (-1);

	va_start(parametro, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_write(format[i]);
			contador++;
		}

		if (!format[i])
			return (contador);

		if (!format[i + 1])
			return (-1);

		fun = tipo_valido(format[i + 1]);

		if (fun != NULL)
		{
			contador += fun(parametro);
			i += 2;
		}
		if (format[i + 1] == '%')
		{
			_write(format[i + 1]);
			contador++;
			i += 2;
		}
		else
		i++;
	}
	va_end(parametro);
	return (contador);
}
