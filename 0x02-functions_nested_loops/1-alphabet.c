#include "main.h"
/**
 * main - Entry point
 * print_alphabet - program to print alphabets in lower case
 * return: nothing
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
