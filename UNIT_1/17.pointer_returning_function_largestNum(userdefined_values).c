#include <stdio.h>

int* largest(int*, int*);

int main()
{
	int a, b;
	int* l;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	l = largest(&a, &b);

	printf("largest number : %d\n", *l);

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

/*

Output:

Enter two numbers: 6 9
largest number : 9

*/