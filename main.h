#ifndef MAIN_H
# define MAIN_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/**
 * struct _format - Typedef struct
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

typedef struct s_norm
{
	va_list	ap;
	int		cnt;
}	t_norm;

int _printf(const char *, ...);
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);
int _putchar(char);
int buffer(char);
int _strlen(const char *);
int _print(char *);
char *itoa(long int, int);
int helper(t_norm *, const char *);
int percent_handler(const char *, va_list, int *);

#endif
