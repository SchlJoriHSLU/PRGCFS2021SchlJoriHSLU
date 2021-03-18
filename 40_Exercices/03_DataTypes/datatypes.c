#include <stdio.h>
#include <stdbool.h>


int main()
{
	printf("size of char: %ld byte(s).\n", sizeof(char) );
	printf("size of uchar: %ld byte(s).\n", sizeof(unsigned char) );
	printf("size of short: %ld byte(s).\n", sizeof(short) );
	printf("size of int: %ld byte(s).\n", sizeof(int) );
	printf("size of float: %ld byte(s).\n", sizeof(float) );
	printf("size of double: %ld byte(s).\n", sizeof(double) );
	printf("size of bool: %ld byte(s).\n", sizeof(bool) );

	return 0;
}
