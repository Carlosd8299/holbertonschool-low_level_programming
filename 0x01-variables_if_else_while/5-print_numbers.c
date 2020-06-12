#include <stdio.h>

/**
 * main - prints numbers from 0 to 10.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
int i = 0;

char new = '\n';

while (i < 10)
{

printf("%d", i);
i++;

}
putchar(new);

return (0);
}
