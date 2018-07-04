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

	a = 10;
	b = 20;

	c = a + b;
	printf("Addition = %d\n", c);
}

void sub()
{
	int a, b, c;
	
	a = 10;
	b = 20;

	c = a - b;
	printf("Sub = %d\n", c);
}


void mul()
{
	int a, b, c;
	
	a = 10;
	b = 20;

	c = a* b;
	printf("Multiply = %d\n", c);
}

void div()
{
	int a, b, c;
	
	a = 10;
	b = 20;

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