#include <stdio.h>

int main()
{
	int a, b, c, ch;

	//Taking two inputs
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);

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

**********************************************
Enter two numbers: 5 6
Press 1(add), 2(sub), 3(multiply), 4(devide)
1
Addition = 11
**********************************************


**********************************************
Enter two numbers: 3 4
Press 1(add), 2(sub), 3(multiply), 4(devide)
3
Multiply = 12
**********************************************

*/