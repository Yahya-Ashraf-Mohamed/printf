#include "main.h"
/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int i = -1;

	while (s[++i] != '\0')
	{
		if (c >= 'a' && c <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
/**
 * print_hexadecimal_upp - Print a number in hexadecimal format
 * @list: Number to print
 * Return: Length of the number
 **/
int print_hexadecimal_upp(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned int), 16);
	pb = string_to_upper(pb);
	s = _print((pb != NULL) ? pb : "NULL");
	return (s);
}
/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i = -1;

	while (s1[++i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * print_pointer - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_pointer(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned long int), 16);
	if (!_strcmp(pb, "0"))
		return (print("(nil)"));
	s = _print("0x");
	if (!_strcmp(pb, "-1"))
		s += _print("ffffffffffffffff");
	else
		s += _print(pb);
	return (s);
}
/**
 * print_rev_string - Print a string in reverse
 * @list: List of arguments
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int i, s;
	const char *str;

	str = va_arg(list, const char *);
	s = _strlen(str);
	i = s;
	while (--i >= 0)
		_putchar(str[i]);
	return (s);
}
