#include "main.h"
/**
 * times_table - prints times table
 *
*/
void times_table(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n <= 9; n++)
	{
			for (m = 0; m <= 9; m++)
			{

					r = n * m;

				if (r < 10)
				{
					if (r > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(r + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}

				if(m < 9)
				{
					_putchar(',');
				}

			}
		_putchar('\n');
	}
}
