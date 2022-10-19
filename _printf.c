#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
*/

int _printf(const char *format, ...)
{
int characters_printed;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"u", unsigned_integer},
{"b", print_binary},
{"r", print_reversed},
{"o", print_octal},
{"x", print_hex},
{"X", print_heX},
{"R", rot13},
{NULL, NULL}
};
  
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
  
/*Calling parser function*/
characters_printed = parser(format, f_list, arg_list);
va_end(arg_list);
return (characters_printed);
}
