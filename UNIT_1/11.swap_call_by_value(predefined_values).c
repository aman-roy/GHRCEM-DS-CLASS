#include <stdio.h>

void swap(int, int);

int main()
{
	int a, b;

	a = 5;
	b = 7;

	printf("Before swap:\n");
	printf("A = %d || B = %d\n", a, b);

	swap(a, b);

	printf("After swap:\n");
	printf("A = %d || B = %d\n", a, b);

	return 0;
}


void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("\nInside swap:\n");
	printf("A = %d || B = %d\n\n", a, b);
}


/*

Output:

Before swap:
A = 5 || B = 7

Inside swap:
A = 7 || B = 5

After swap:
A = 5 || B = 7

*/