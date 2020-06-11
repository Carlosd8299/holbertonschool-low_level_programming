#include <stdio.h>

/**
 * main - prints all the characters from a to Z.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
char ch_1 = 'a';
char ch_2 = 'A';
char new = '\n';

while (ch_1 <= 'z')
{

putchar(ch_1);
ch_1++;

}

while (ch_2 <= 'Z')
{

putchar(ch_2);
ch_2++;

if (ch_2 > 'Z')
{

putchar(new);

}

}

return (0);
}
