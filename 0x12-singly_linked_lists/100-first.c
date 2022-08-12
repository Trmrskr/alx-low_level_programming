#include <stdio.h>

/**
 * before_main - a function that executes before main executes
 * Description - uses constructor attribute to make
 * before_main() run before main function. The destructor
 * attribute can be used to make a function run after main
 * attribute.
 * Note that this attribute can also be added to the function
 * prototype
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore \
my house upon my back!\n");
}
