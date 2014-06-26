#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 50

struct employee{
	char name[MAX_CHAR];
	char surmane [MAX_CHAR];
	int phone_number;
	int salary;
} employee;


struct employee *create_user(int name[50])
{       
	struct employee *emp = NULL;
	emp = (struct employee *) malloc(sizeof(struct employee));
	printf("input employee name:");
	scanf("%s", employee.name);
} 



int main(int argc, const char *argv[])
{
	int answer;
	struct employee *list = NULL;

	printf("welcome to the employee database...\n");
	printf("enter 1 to add a user:\n");
	printf("enter 2 to print existing users\n");
	printf("enter q to exit\n");
	printf(">"); 
	scanf(" %d", &answer);

	switch(answer){
		case 1:
			create_user(list);

	}

	return 0;
}	
