#include "main.h"
/**
 * _printf - format and print output to the stdo stream
 * @format: a pointer to a char string
 * Return: the num of elements outputted
 **/
int _printf(const char *format, ...)
{
	/*variables for return values*/
	unsigned int r_value = 0, r_value1 = 0, r_value2 = 0, r_value3 = 0;
	int h = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (; format[h] != '\0'; h++)
	{
		if (format[h] == '%')
		{
			if (format[h + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				h++;
				r_value++;
			}
			else if (format[h + 1] == 'd' || format[h + 1] == 'i')
			{
				r_value1 = print_digit(va_arg(args, int));
				r_value += r_value1;
				h++;
			}
			else if (format[h + 1] == 's')
			{
				r_value2 = print_str(va_arg(args, char *));
				r_value += r_value2;
				h++;
			}
			else if (format[h + 1] == '%')
			{
				_putchar('%');
				h++;
				r_value++;
			}
			else if (format[h + 1] == 'b')
			{
				r_value3 = print_bin(va_arg(args, unsigned int));
				r_value += r_value3;
				h++;
			}
			else
			{
				_putchar(format[h]);
				r_value++;
			}
		}
		else
		{
			_putchar(format[h]);
			r_value++;
		}
	}

		return (r_value);
}
