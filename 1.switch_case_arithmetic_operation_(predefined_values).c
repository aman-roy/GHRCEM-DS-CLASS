#include <stdio.h>

int main()
{
	int a, b, c, ch;

	// Declaration
	a=10;
	b=20;
	
	// Print the values
	printf("A = %d and B = %d\n", a, b);

	// Take choice
	printf("Press 1(add), 2(sub), 3(multiply), 4(divide)\n");
	scanf("%d", &ch);

	switch(ch)
	{
		case 1:
			c = a+b;
			printf("Addition = %d\n", c);
			break;
		case 2:
			c = a-b;
			printf("Sub = %d\n", c);
			break;
		case 3:
			c = a*b;
			printf("Multiply = %d\n", c);
			break;
		case 4:
			c = a/b;
			printf("Division = %d\n", c);
			break;
		default:
			printf("Wrong choice!\n");
			break;
	}

	return 0;
}


/*

Output:

A = 10 and B = 20
Press 1(add), 2(sub), 3(multiply), 4(divide)
2
Sub = -10

*/