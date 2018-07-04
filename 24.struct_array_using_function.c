#include <stdio.h>

struct Student {
	int roll_no;
	char name[20];
} object[100];

void insert(int);
void display(int);

int main()
{
	int n;

	printf("How many students: ");
	scanf("%d", &n);

	insert(n);
	display(n);

	return 0;
}


void insert(int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Enter name: ");
		scanf("%s", object[i].name);
		printf("Enter roll_no: ");
		scanf("%d", &object[i].roll_no);
	}
}

void display(int n)
{
	printf("Values are: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("Name = %s and Roll no = %d\n", object[i].name, object[i].roll_no);
	}
}

/*

Output:

How many students: 2
Enter name: Aman
Enter roll_no: 34
Enter name: Aadesh
Enter roll_no: 27
Values are: 
Name = Aman and Roll no = 34
Name = Aadesh and Roll no = 27



*/