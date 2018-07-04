#include <stdio.h>

// Function prototype
void add();
void sub();
void mul();
void div();

int main()
{
	add();
	sub();
	mul();
	div();
}

void add()
{
	int a, b, c;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	c = a + b;
	printf("Addition = %d\n", c);
}

void sub()
{
	int a, b, c;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	c = a - b;
	printf("Sub = %d\n", c);
}


void mul()
{
	int a, b, c;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	c = a* b;
	printf("Multiply = %d\n", c);
}

void div()
{
	int a, b, c;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	c = a / b;
	printf("Division = %d\n", c);
}

/*

Output:

Enter two numbers: 5 4
Addition = 9
Enter two numbers: 9 10
Sub = -1
Enter two numbers: 10 2
Multiply = 20
Enter two numbers: 6 3
Division = 2

*/