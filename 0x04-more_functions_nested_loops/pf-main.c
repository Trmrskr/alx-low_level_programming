#include <stdio.h>
#include <math.h>

int main(void)
{
/*	long int num = 612852475143;*/
	long int num = 1231952;
	long int factor;

	for (factor =  2; factor < num; factor ++)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
