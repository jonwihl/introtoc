#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char *argv[])
{
	int x = 1;
	int y = 0;
	int i;
	int fib = 0;
	int num;
	
	printf("number of terms: ");
	scanf("%d", &i);
	printf("Fibonacci: %d,%d,", y, x);
	num = 2;

	
	while (num < i)
	{
		fib = y + x;
		y = x;
		x = fib;
		++num;
		printf("%d", fib);
	}

	return 0;
}
