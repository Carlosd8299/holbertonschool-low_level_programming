#include <stdio.h>

/**
 * main - prints numbers from 0 to 10 in between a ',' .
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{

putchar(i);

if (i != 57)
{

putchar(44);
putchar(32);

}

}

putchar('\n');

return (0);
}
