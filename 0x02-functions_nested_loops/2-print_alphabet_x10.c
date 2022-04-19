#include "main.h"
/**
 *print_alphabet_x10 - program that prints the alphabets ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char alphabet;
int num = 10;
for (alphabet = 'a'; alphabet <= 'z';)
{
while (num <= 10)
{
alphabet = alphabet++;
}
_putchar(alphabet);
_putchar('\n');
}
}
