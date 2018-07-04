#include <stdio.h>

char name[100][20];
int roll_no[100];

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
		scanf("%s", name[i]);
		printf("Enter roll_no: ");
		scanf("%d", &roll_no[i]);
	}
}

void display(int n)
{
	printf("Values are: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("Name = %s and Roll no = %d\n", name[i], roll_no[i]);
	}
}

/*

Output:

How many students: 2
Enter name: Abc
Enter roll_no: 1
Enter name: Kmr
Enter roll_no: 2
Values are: 
Name = Abc and Roll no = 1
Name = Kmr and Roll no = 2

*/