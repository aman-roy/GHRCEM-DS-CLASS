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

	for (int i = 0; i < n; ++i)
	{
		printf("Enter name: ");
		scanf("%s", name[i]);
		printf("Enter roll_no: ");
		scanf("%d", &roll_no[i]);
	}


	printf("Values are: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("Name = %s and Roll no = %d\n", name[i], roll_no[i]);
	}

	return 0;
}

/*

Output:

How many students: 2
Enter name: Abc
Enter roll_no: 2
Enter name: saff
Enter roll_no: 3
Values are: 
Name = Abc and Roll no = 2
Name = saff and Roll no = 3

*/