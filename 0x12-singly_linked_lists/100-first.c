#include <stdio.h>

/**
 * hare - Function executed before the main function.
 *
 * Description: This function is automatically executed
 * before the main function.
 *
 * Return: void
 */

void __attribute__((constructor)) hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
