#include <stdio.h>

/**
 * main - prints all the characters from a to Z.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
char ch = 'z';
char new = '\n';

while (ch >= 'a')
{

putchar(ch);
ch--;

}

putchar(new);

return (0);
}
