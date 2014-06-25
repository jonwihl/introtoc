#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int x = 5;
	int *p = &x;
	int a[4] = {23, 12, 1, 0};
	int *array_p;
	/*
	printf("address of x = %p\n", p);
	printf("address of p = %p\n", &p);
	printf("wow, %d = %d\n", *p, a);
	*/

	array_p = a;
	
	printf("start of the array %p\n", a);
	printf("pointer array %p\n", array_p);
	printf(" %d\n", a[1]);
	printf(" %p \n", array_p);

	return 0;
}
