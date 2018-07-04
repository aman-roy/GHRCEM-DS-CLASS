#include <stdio.h>

void swap_call_by_value(int, int);
void swap_call_by_refrence(int*, int*);

int main()
{
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	printf("Before swap:\n");
	printf("A = %d || B = %d\n\n", a, b);

	swap_call_by_value(a, b);

	printf("After swap(Call by value):\n");
	printf("A = %d || B = %d\n[NO CHANGE]\n\n", a, b);


	swap_call_by_refrence(&a, &b);

	printf("After swap(Call by refrence):\n");
	printf("A = %d || B = %d\n[VALUE SWAPED]\n", a, b);

	return 0;
}


void swap_call_by_value(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}


void swap_call_by_refrence(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/*

Output:

Enter two numbers: 1 2
Before swap:
A = 1 || B = 2

Inside swap:
A = 2 || B = 1

After swap:
A = 1 || B = 2


*/