#include "main.h"
#include <stdio.h>

/**
*tipo_valido - valida los tipos de datos
*tipoDato: tipo de dato a validar
*
*Return: retorna la funcion para imprimir el dato;
*/

char *(*tipo_valido(char tipoDato))(va_list) /* va_list tipo de dato que nececitamos par imprimir */
{
	TtiposValidos tipos[] = {
		{"c", convert_char},
		{"s", convert_string},
		{"i", convert_int},
		{"d", convert_int},
		{"%", convert_parcent},
		{NULL, NULL}
	};

	int i;

	for (i = 0; tipos[i].valido; i++) {

		if (tipoDato == *tipos[i].valido) {

			return (tipos[i].funcion);
		}
	}

	return (NULL);
}

/**
* asignar memoria a lo que vamos a imprimir?
*
*
*
*
*
*
*/
