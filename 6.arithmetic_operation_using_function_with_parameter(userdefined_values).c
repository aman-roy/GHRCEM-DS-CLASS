#include <stdio.h>

// Function prototype
void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main()
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	add(a, b);
	sub(a, b);
	mul(a, b);
	div(a, b);
}

void add(int a, int b)
{
	int c;

	c = a + b;
	printf("Addition = %d\n", c);
}

void sub(int a, int b)
{
	int c;
	
	c = a - b;
	printf("Sub = %d\n", c);
}


void mul(int a, int b)
{
	int c;

	c = a * b;
	printf("Multiply = %d\n", c);
}

void div(int a, int b)
{
	int c;

	c = a / b;
	printf("Division = %d\n", c);
}

/*

Output:

Enter two numbers: 10 2
Addition = 12
Sub = 8
Multiply = 20
Division = 5


*/