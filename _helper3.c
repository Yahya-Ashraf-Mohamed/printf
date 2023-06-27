#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */
int rot13(char *s)
{
	int i = -1, j;
	char *basic, *rot13;

	basic = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	while (s[++i] != '\0')
	{
		j = -1;
		while (basic[++j] != '\0')
		{
			if (s[i] == basic[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (!basic[j])
			_putchar(s[i]);
	}
	return (i);
}
/**
 * print_rot - Prints the rot13'ed string
 * @list: String to encoded
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *p;
	int pl;

	p = va_arg(list, char *);
	pl = rot13((p != NULL) ? p : "(null)");
	return (pl);
}
/**
 * print_string - Print string
 * @list: list.
 * Return: String length.
 */
int print_string(va_list list)
{
	char *p;
	int pl;

	p = va_arg(list, char*);
	pl = _print((p != NULL) ? p : "(null)");
	return (pl);
}
/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *pb;
	int s;

	pb = itoa(va_arg(list, unsigned int), 10);
	s = _print((pb != NULL) ? pb : "NULL");
	return (s);
}
