#include "main.h"
/**
 * put_s - outputs unformatted string
 * @str: a string to be outputted
 * Return: the num of char printed
 **/
int put_s(char *str)
{
	int i = 0, r_value = 0;

	if (str)
	{

		while (str[i] != '\0')
		{
			putchr(str[i]);
			r_value += 1;
			i++;
		}
	}

	return (r_value);
}
