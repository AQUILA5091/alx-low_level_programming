#include "main.h"
/**
* _puts - prints a string follwed by a new line
* @str: the value to process to the stdout.
*/
void _puts(char *str)
{
while (*str > 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

