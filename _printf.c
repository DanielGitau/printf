#include "main.h"
/**
 * _printf - format and print output to the stdo stream
 * @format: a pointer to a char string
 * Return: the num of elements outputted
 **/
int _printf(const char *format, ...)
{
	convertType s[] = {
		{"%c", print_char}, {"%d", print_digit},
		{"%i", print_digit}, {"%u", print_digit},
		{"%s", print_str}, {"%%", print_percent},
		{"%b", print_bin}, {"%o", print_oct}
		/*{"%h", print_hexa}, {"%H", print_Hexa}*/
	};
	
	/*variables for return values*/
	unsigned int r_value = 0;
	int h = 0, k = 7;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (; format[h] != '\0'; h++)
	{
		if (format[h] == '%')
		{
			while ( k >= 0)
			{
				if (s[k].op[1] == format[h + 1])
				{
					r_value += s[k].f(args);
					h += 2;
					break;
				}
				k--;
			}
			_putchar(format[h]);
			r_value++;
		}
		else
		{
			_putchar(format[h]);
			r_value++;
		}
	}
	va_end(args);

		return (r_value);
}
