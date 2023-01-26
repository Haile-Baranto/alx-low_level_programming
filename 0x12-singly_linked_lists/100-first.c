#include<stdio.h>

/**
 * first - funtion prototype
 * __attribute__((constructor)) -helps us to execute first
 * beffor the execution of main function
 */
void first(void) __attribute__ ((constructor));

/**
 * first - function to executed first(befor main)
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
