#include <stdio.h>

int* largest(int*, int*);
int* smallest(int*, int*);


int main()
{
	int a, b;
	int *l, *s;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

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

Enter two numbers: 4 5
largest number : 5
smallest number : 4

*/