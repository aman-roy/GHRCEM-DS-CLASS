#include <stdio.h>

// Function prototype
void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main()
{
	int a, b, ch;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);


	// Take choice
	printf("Press 1(add), 2(sub), 3(multiply), 4(divide)\n");
	scanf("%d", &ch);

	switch(ch)
	{
		case 1:
			add(a, b);
			break;
		case 2:
			sub(a, b);
			break;
		case 3:
			mul(a, b);
			break;
		case 4:
			div(a, b);
			break;
		default:
			printf("Wrong choice!\n");
			break;
	}

	return 0;
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

	c = a* b;
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

Enter two numbers: 7 9
Press 1(add), 2(sub), 3(multiply), 4(divide)
3
Multiply = 63

*/