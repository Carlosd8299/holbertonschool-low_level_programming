#include <stdio.h>

/**
 * main - prints all the characters from a to z except 'q' and 'e'.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
char c = 'a';
char new = '\n';

while (c <= 'z')
{

if (c != 'q' && c != 'e')
{
putchar(c);
}

c++;
}

putchar(new);

return (0);
}
