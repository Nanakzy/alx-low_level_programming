#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - prints a string
 *
 * Return: 0
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
