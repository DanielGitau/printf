#include "main.h"
/**
 * _printf - format and print output to the stdo stream
 * @format: a pointer to a char string
 * Return: the num of elements outputted
 **/
int _printf(const char *format, ...)
{
	/*variables for return values*/
	unsigned int r_value = 0;
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
				r_value += print_digit(va_arg(args, int));
				h++;
			}
			else if (format[h + 1] == 's')
			{
				r_value +=  print_str(va_arg(args, char *));
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
				r_value += print_bin(va_arg(args, unsigned int));
				h++;
			}
			else if (format[h + 1] == 'u')
			{
				r_value += print_unsigned(va_arg(args, unsigned int));
				h++;
			}
			else if (format[h + 1] == 'o')
			{
				r_value += print_oct(va_arg(args, unsigned int));
				h++;
			}
			else if (format[h + 1] == 'x')
			{
				r_value += print_hexa(va_arg(args, unsigned int));
				h++;
			}
			else if (format[h + 1] == 'X')
			{
				r_value += print_Hexa(va_arg(args, unsigned int));
				h++;
			}
			else if (format[h + 1] == 'p')
				{
					r_value += print_pointer(va_arg(args, void *));
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
