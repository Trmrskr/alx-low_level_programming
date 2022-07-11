#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int num = INT_MIN;

	printf("%u\n", num);
	printf("%u\n", num * -1);
	printf("%d\n", num / 1000000);
	return (0);
}
