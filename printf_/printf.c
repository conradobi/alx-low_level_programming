#include <limits.h>
#include <stdio.h>
  #include "main.h"

/*
 * File: _printf.c
 * Authors: [Onyedikachi Onu](https://github.com/St-Pardon) and [Raji R.Yewand](https://github.com/wandexdev).
 * Desc: Performs formatted output conversion and Print Data
 */

/**
 * _printf - output value to stdio
 * @format: param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i, j, len = 0;

	f_id func_list[] = {/*pairing the format id to a handling function*/
		{"c", _print_char},
		{"s", _putstr},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};

	va_list args;

	va_start(args, format);
	if (!format)
		return (-1); /*falsy value used to check if format is empty*/

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{/*if %, we loop throught the stuct list above*/
			for (j = 0; func_list[j].id != NULL; j++)
			{
				if (format[i + 1] == func_list[j].id[0])
				{
					len += func_list[j].func(args);/*whatever is returned increment len*/
					break;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}

	}
	va_end(args);
	return (len);
}


int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
