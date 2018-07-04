#include <stdio.h>

// Function prototype
void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main()
{
	int a,b;

	a = 10;
	b = 20;

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

Addition = 30
Sub = -10
Multiply = 200
Division = 0

*/