#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	char x = 0;
	printf("choose an integer:\n");
	scanf(" %c", &x);
	printf("ASCII value of %c is %i\n", x, x);
	

	return 0;
}
