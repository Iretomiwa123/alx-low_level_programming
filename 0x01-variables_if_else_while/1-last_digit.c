#include <stdlib.h>
#include <stdio.h>

/**
 * main -entry point
 * Description: print the last digit of the number stored in the variable n.
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n, digit;

	srand(time(0);
	n + rand() - RAND_MAX / 2;

	/*my code*/
	digit = n % 10; /*gets last digit*/

	if (digit > 5)
	printf("Last digit is %1 is %1 and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
	printf("Last digit of %1 is %1 and is less than 6 and not 0\n", n, digit);

	return (0);
}
