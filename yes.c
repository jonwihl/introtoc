#include <stdio.h>
#include <stdlib.h>

int x, y;
int div(x , y)
{
	return (x / y);
}

int main(int argc, const char *argv[])
{

	printf("Input two numbers: \n");
	scanf(" %d, %d", x, y);
	if (x % y == 0)
	{
		printf("yes\n");
	}
	if (x % y != 0)
	{
		printf("no\n");
	}
	if (y == 0)
	{
		printf("you can not divide by zero\n");
	}
	return 0;
}
