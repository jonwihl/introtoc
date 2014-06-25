#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int x, y;
	int a, s, m;
	float d;

	printf("enter two numbers\n");
	scanf("%d %d", &x, &y);
	
	printf("select a function: (add = a, sub = s, div = d, mult = m\n");
	scanf(" %d", a || s || m || d);
	      
	a = x + y;
	s = x - y;
	m = x * y;
	d = x / (float) y;



	return 0;
}
