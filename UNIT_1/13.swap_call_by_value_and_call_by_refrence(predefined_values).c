#include <stdio.h>

void swap_call_by_value(int, int);
void swap_call_by_refrence(int*, int*);

int main()
{
	int a, b;

	a = 3;
	b = 6;

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

Before swap:
A = 3 || B = 6

After swap(Call by value):
A = 3 || B = 6
[NO CHANGE]

After swap(Call by refrence):
A = 6 || B = 3
[VALUE SWAPED]


*/