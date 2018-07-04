#include <stdio.h>

int* largest(int*, int*);
int* smallest(int*, int*);


int main()
{
	int a, b, ch;
	int *l, *s;

	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

	printf("press 1(largest), 2(smallest)\n");
	scanf("%d", &ch);

	switch(ch)
	{
		case 1:
			l = largest(&a, &b);
			printf("Largest = %d\n", *l);
			break;
		case 2:
			s = smallest(&a, &b);
			printf("Smallest = %d\n", *s);
			break;
		default:
			printf("Wrong Choice!\n");
			break;
	}

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

Enter two numbers: 7 9
press 1(largest), 2(smallest)
2
Smallest = 7

*/