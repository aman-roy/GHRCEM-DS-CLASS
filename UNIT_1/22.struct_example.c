#include <stdio.h>

struct Student {
	int roll_no;
	char name[20];
} object;

int main()
{
	printf("Enter name: ");
	scanf("%s", object.name);

	printf("Enter age: ");
	scanf("%d", &object.roll_no);


	printf("Values are: \n");
	printf("Name = %s and Roll no = %d\n", object.name, object.roll_no);

	return 0;
}


/*

Output:

Enter name: aman
Enter age: 18
Values are: 
Name = aman and Roll no = 18

*/