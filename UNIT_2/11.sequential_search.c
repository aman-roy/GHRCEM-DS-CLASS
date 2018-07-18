#include <stdio.h>

int main()
{
	int n, key;
	int entered = 0;

	printf("How many numbers: ");
	scanf("%d", &n);

	int A[n];

	printf("Enter %d numbers\n", n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);
	}

	printf("Enter the num you want to search: ");
	scanf("%d", &key);

	// Searching
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == key)
		{
			printf("The number is at %d location\n", (i+1));
			entered = 1;
		}
	}

	if (!entered)
	{
		printf("Not Found!\n");
	}

	return 0;
}


/*

Output:

How many numbers: 5 
Enter 5 numbers
43 6 24 97 242
Enter the num you want to search: 1
Not Found!


How many numbers: 5
Enter 5 numbers
5 3 6 46 32
Enter the num you want to search: 6
The number is at 3 location


*/