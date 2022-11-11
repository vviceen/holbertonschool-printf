#include "main.h"
/**
 *
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
int print_int(va_list args)
{
	long int aux = 1;
	long int num = 0;
	int len = 0;

	num = va_arg(args, int);
	if (num == 0)
	{
		_putchar('0');
	}
	if (num < 0)
	{
		_putchar('-');
		len++;
		num = num * -1;
	}
	while (num / aux > 9)
	{
		aux *= 10;
	}
	while (aux != 0)
	{
		len += _putchar((num / aux) + '0');
		num %= aux;
		aux /= 10;
	}
	return (len);
}
int print_str(va_list args)
{
	int i = 0, len = 0;
	char *str = NULL;

	str = va_arg(args, char *);

	for (; str[i]; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
