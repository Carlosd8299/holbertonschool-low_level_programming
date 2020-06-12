#include <stdio.h>

/**
 * main - prints numbers from 00 to 99 in between a ',' .
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
int i;
int a;

for (i = 48; i <= 57; i++)
{

for (a = 48; a <= 57; a++)
{

putchar(i);
putchar(a);

if (i < 57 || a < 57)
{

putchar(44);
putchar(32);

}

}

}

putchar('\n');

return (0);
}
