#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	int (*f)(va_list args);
	va_list args;

	if (!format)
		return (0);
	va_start(args, format);
	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i + 1])
		{
			f = get_format(&format[i + 1]);
			if (f)
			{
				len += (f(args));
				i += 2;
			}
			else
			{
				len += _putchar('%');
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			len += _putchar(format[i]);
			i += 2;
		}
		len += _putchar(format[i]);
	}
	va_end(args);
	return (len);
}
