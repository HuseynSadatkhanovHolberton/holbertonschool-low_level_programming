#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @ap: argument list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer
 * @ap: argument list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: argument list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: argument list
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything based on format string
 * @format: list of argument types
 *
 * Description: 'c' = char, 'i' = int, 'f' = float, 's' = string
 * Any other character is ignored. Prints a newline at the end.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep;
	printer_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	i = 0;
	sep = "";
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

