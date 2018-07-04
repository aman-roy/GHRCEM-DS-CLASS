#include <stdio.h>

int* largest(int*, int*);
int* smallest(int*, int*);


int main()
{
	int a, b;
	int *l, *s;

	a = 3;
	b = 5;

	printf("A = %d || B = %d\n",a, b);

	l = largest(&a, &b);
	s = smallest(&a, &b);

	printf("largest number : %d\n", *l);
	printf("smallest number : %d\n", *s);

	return 0;
}


int* largest(int *a, int *b)
{
	if (*a > *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int* smallest(int *a, int *b)
{
	if (*a < *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

/*

Output:

A = 3 || B = 5
largest number : 5
smallest number : 3

*/