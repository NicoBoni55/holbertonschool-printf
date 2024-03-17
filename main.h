#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 *rep_tiposValidos - verificar el parametro correcto
 *@valido: parametro a consultar
 *@funcion: punero a la funcion convierte ese parametro
 */

struct rep_tiposValidos
{
	char *valido;
	char *(*funcion)(va_list);
};

typedef struct rep_tiposValidos TtiposValidos;

char *(*tipo_valido(const char *c))(va_list);
int _strlen(char *s);
int _write(char s);

char *convert_char(va_list para);
char *convert_string(va_list para);
char *convert_int(va_list para);

int _printf(const char *format, ...);

#endif /* MAIN_H */
