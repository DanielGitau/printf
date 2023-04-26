#include "main.h"
/**
 * _printf - format and print output to the stdo stream
 * @format: a pointer to a char string
 * Return: the num of elements outputted
 **/
int _printf(const char *format, ...)
{
	/*variables for return values*/
	unsigned int r_value = 0, r_value1 = 0, r_value2 = 0;
	int h = 0;

	va_list args;

	va_start(args, format);

	for (; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
		{
			putchr(format[h]);
		}
		else if (format[h + 1] == 'c')
		{
			putchr(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 'd' || format[h + 1] == 'i')
		{
			r_value1 = put_digit(va_arg(args, int));
			r_value += (r_value1 - 1);
			h++;
		}
		else if (format[h + 1] == 's')
		{
			r_value2 = put_s(va_arg(args, char *));
			r_value += (r_value2 - 1);
			h++;
		}
		else if (format[h + 1] == '%')
		{
			putchr('%');
			h++;
		}
		r_value += 1;
	}

	return (r_value);
}
