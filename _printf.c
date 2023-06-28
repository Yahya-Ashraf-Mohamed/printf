#include "main.h"
/**
 * printsetup - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 * Return: Size of the numbers of elements printed
 **/
int printsetup(const char *str, va_list list, int *i)
{
	int s, j, nf;
	j = -1;
	s = 0;
	format setup[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*i += 1;
	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	nf = sizeof(setup) / sizeof(setup[0]);
	while (++j < nf)
	{
		if (str[*i] == setup[j].type)
		{
			s = setup[j].f(list);
			return (s);
		}
	}
	_putchar('%');
	_putchar(str[*i]);
	return (2);
}
/**
 * helper - Format controller
 * @setup: String format
 * @norm: stucture of arguments
 * Return: Total size of arguments with the total size of the base string
 **/
int	helper(const char *setup, va_list list)
{
	int s, i, a;

	i = -1;
	s = 0;
	while (setup[++i])
	{
		if (setup[i] == '%' && setup[i + 1] == '\0')
		{
			i++;
			break ;
		}
		if (setup[i] == '%')
		{
			a = printsetup(setup, list, &i);
			if (a == -1)
				return (-1);
			s += a;
			continue;
		}
		_putchar(setup[i]);
		s++;
	}
	return (s);
}
/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int	_printf(const char *format, ...)
{
	int s;
	va_list as;

	if (format == NULL)
		return (-1);
	s = _strlen(format);
	if (s <= 0)
		return (0);
	va_start(as, format);
	s = helper(format, as);
	_putchar(-1);
	va_end(as);
	return (s);
}
