#include <stdio.h>

int x = 0;

void sum();

int main()
{
	printf("x[before sum] = %d\n", x);
	sum();
	printf("x[after sum] = %d\n", x);

	// printf("A = %d\n", a); /* Uncommenting this will show error! */
	return 0;
}

void sum()
{
	int a,b;
	a = 7;
	b = 3;

	x = a+b;
}

/*

Output:

x[before sum] = 0
x[after sum] = 10

*/