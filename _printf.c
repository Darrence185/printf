#include "main.h"
#include <stdio.h>

/**
* _printf - produces output according to a format
*
*@format: format string containing the characters and the specifiers
*
*Descripton: this function will call the get_print() function that will
** determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 *
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
    int (*pfunc)(va_list, flags_t *);
}