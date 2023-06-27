#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @str: String
 * Return: Length
 **/
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != 0)
		i++;
	return (i);
}
/**
 * print - print char.
 * @str: string.
 * Return: string length.
 */
int _print(char *str)
{
	int i = -1;

	while (str[++i] != '\0')
		_putchar(str[i]);
	return (i);
}
/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 * Return: char
 **/
char *itoa(long int num, int base)
{
	static char *arr = "0123456789abcdef";
	static char buff[50];
	char s = 0;
	char *p;
	unsigned long nb = num;

	if (num < 0)
	{
		nb = -num;
		s = '-';
	}
	p = &buff[49];
	*p = '\0';

	do      {
		*--p = arr[nb % base];
		nb /= base;
	} while (nb != 0);

	if (s)
		*--p = s;
	return (p);
}
