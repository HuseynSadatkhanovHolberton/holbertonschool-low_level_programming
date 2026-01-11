#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *sep = "";

	typedef struct printer
	{
		char c;
		void (*f)(va_list);
	} printer_t;

	void print_char(va_list a) { printf("%c", va_arg(a, int)); }
	void print_int(va_list a) { printf("%d", va_arg(a, int)); }
	void print_float(va_list a) { printf("%f", va_arg(a, double)); }
	void print_string(va_list a)
	{
		char *s = va_arg(a, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);
	}

	printer_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == p[j].c)
			{
				printf("%s", sep);
				p[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}

