#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the variable 'n'.
 *
 * Description: with the random number stored in the variable 'n'
 * print the last digit of the number stored in the variable 'n'
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
int n;
int lst;

srand(time(0));
n = rand() - RAND_MAX / 2;
lst = n % 10;

if (lst > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lst);
}
else if (lst == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lst);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
}

return (0);
}
