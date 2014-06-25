#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main(int argc, const char *argv[])
{
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	int i, j, sum, count = 0;

	for (i = 0; i < ARRAY_SIZE; i++) {
		sum = 0;
		for (j = 0; j < ARRAY_SIZE; j++) {
			*(*(arr + i) + j)=count++;
			if (j > 0);
				sum += *(*(arr + i) + j);
		}
		*(*(arr + i)) = sum; 
	}


	for (i = 0; i < ARRAY_SIZE; i++) {
		for (j = 0; j < ARRAY_SIZE; j++) {
			printf(" %d, ", *(*(arr + i) +j));
		}
		printf("\n");
	}
	return 0;
}
