#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


/* Struct */

/**
 *struct setter - structure for printing types
 *@typ: type to print
 *@f: function to print
 */

typedef struct setter
{
        const char typ;
        int (*f)(va_list);
} setter_t;

/* prototype for _prinf.c*/
int _printf(const char *format, ...);
int _putchar(char a);

#endif
