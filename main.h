#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 *struct rep_tiposValidos - verificar el parametro correcto
 *@valido: parametro a consultar
 *@funcion: punero a la funcion convierte ese parametro
 */

struct rep_tiposValidos
{
	char *valido;
	int (*funcion)(va_list);
};

typedef struct rep_tiposValidos TtiposValidos;

int (*tipo_valido(char c))(va_list);
int _stamp(char *s);
int _write(char s);

int convert_char(va_list para);
int convert_string(va_list para);
int convert_int(va_list para);

int _printf(const char *format, ...);

#endif /* MAIN_H */
