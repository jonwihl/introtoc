#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int s[16];

int swap(int x, int y)
{
	int temp;
	temp = s[y] ;
	s[y] = s[x];
	s[x] = temp;
}
int main(int argc, const char *argv[])
{
	int no_stds = 16;
	int i, j =0;
	int student_x, student_y;
	

	srand(time(NULL));

	for (i = 0; i < no_stds; i++) {
		s[i] = i;
	}
	for (i = no_stds;  i > 0; i--) {
		student_x = rand() % i;
		student_y = i - 1;
		swap(student_x, student_y);

	}
	for (i = 0; i < no_stds; i++) {
		printf(" %d", s[i]);
	}


	return 0;
}
