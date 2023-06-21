#include "main.h"

/**
 * positive_or_negative - return is zero when input int is 0
 * @i: parameter
 * Return: Always 0
*/

int positive_or_negative(int i)
{
	if ( i > 0 )
	{
		printf("%d is positive\n", i);
	}
	if ( i < 0 )
	{
		printf("%d is negative\n", i);
	}
	if ( i == 0 )
	{
		printf("%d is zero\n", i);
	}

	return 0;

}