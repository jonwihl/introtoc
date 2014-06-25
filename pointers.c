#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	
	int i, a[50];

	for (i = 0; i < 50; i++) {
		*(a + i) = (i % 2 == )? 2 : 0;
		printf("%d, ",  *(a + 1));
	}

	printf("%d\n");
	return 0;
}
