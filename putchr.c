#include "main.h"
/**
 * putchr - output unformatted char
 * @c: the char to be outputted
 * Return: void
 **/
void putchr(char c)
{
return write(1, &c, 1);
}
