#include <stdio.h>

int main()
{
	char c;
	
	printf("please type a character\n");
	
	scanf(" %c", &c);
	
	switch(c){
		case '0': case '1': case '2': case '3': case '4': 
		case '5': case '6': case '7': case '8': case '9':
			printf("digit\n");
			break;

		case 'a': case 'b': case 'c':
			printf("character\n");
			break;
		default:
			printf("other\n");
	
}
	return 0;
}
