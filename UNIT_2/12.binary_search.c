#include <stdio.h>

int binary_search(int A[], int low, int high, int key)
{
	if (low > high)
		return -1;

	int mid = (high+low)/2;

	if (A[mid] == key)
		return (mid+1);
	else if(A[mid] > key)
		return binary_search(A, low, mid-1, key);
	else
		return binary_search(A, mid+1, high, key);

}

int main()
{
	int n, key, pos;

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

	pos = binary_search(A, 0, n-1, key);

	if (pos != -1)
		printf("The number is at %d location\n", pos);
	else
		printf("Not Found!(Maybe list is not sorted)\n");

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
2 4 6 8 10
Enter the num you want to search: 8
The number is at 4 location


*/