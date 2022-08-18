#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned int n;
	n = binary_to_uint("0");
	printf("%u\n", n);
	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("00000000000000000000110010010");
	printf("%u\n", n);
	n = binary_to_uint("11101010001111010111101010001010");
	printf("%u\n", n);
	return (0);
}
