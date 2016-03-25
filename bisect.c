#include <stdio.h>

int main(int argc, char *argv[])
{
	int *foo = NULL;

	printf("Hello world ...\n");

	printf("We change some ...\n");

	printf("print the int, yo! %d\n", *foo);

	for (size_t i = 0; i < 10; i++) {
		printf("%lu\n", i);
	}

	for (size_t i = 0; i < 10; i++) {
		printf("%lu\n", i);
	}

	return 0;
}
