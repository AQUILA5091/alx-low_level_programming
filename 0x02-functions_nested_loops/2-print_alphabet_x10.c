#include "main.h"
/**
* main - check the code.
* print_alphabet_x10 -in lowercase followed by new line
* Return: void, and prints the alphabet on the standard output
*/
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
