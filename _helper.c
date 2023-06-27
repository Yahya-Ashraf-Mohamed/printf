#include "main.h"
/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned int), 2);
	s = _print(pb);
	return (s);
}
/**
 * print_char - print char.
 * @list: va_list.
 * Return: 1
 */
int print_char(va_list list)
{
	int a;

	a = va_arg(list, int);
	_putchar(aux);
	return (1);
}
/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned int), 16);
	s = _print((pb != NULL) ? pb : "NULL");
	return (s);
}
/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, int), 10);
	s = _print((pb != NULL) ? pb : "NULL");
	return (s);
}
/**
 * print_octal - Print a unsigned octal
 * @list: Number to print
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned int), 8);
	s = _print((pb != NULL) ? pb : "NULL");
	return (s);
}

