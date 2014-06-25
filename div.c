#include <stdio.h>


float x;
float y;

float div(float x, float y) 
{
	return	x / y;	
}
	
float avg(float x, float y)
{
	return (x + y) / 2;
}	

int main(int argc, const char *argv[])
{
	int x;
	int y;
	char a;
	double result;



	printf("select two numbers:\n");
	scanf("%d %d", &x, &y);
	printf("Avg or Division?\n");
		do 
		{
			scanf(" %c", &a);
	
	
			if (a == 'd') {
			result = div(x, y);
			} 
			if (a == 'a'){
			result =  avg(x, y);
			}
			printf("The result is %f\n", result);
	 	}	
			while (a == 'd' ||  a == 'a' || a != 'e');
	        
		return 0;
}
