#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int A[], int low, int high)
{
	int pIndex = low;
	int pivot = A[high];

	for (int i = low; i < high; ++i)
	{
		if (A[i] < pivot)
		{
			swap(&A[i], &A[pIndex]);
			pIndex++;
		}
	}
	swap(&A[pIndex], &A[high]);
	return pIndex;
}

void quickSort(int A[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(A, low, high);
		quickSort(A, low, pi-1);
		quickSort(A, pi+1, high);
	}
}

int main()
{
	int n;
	printf("Enter how many numbers: ");
	scanf("%d", &n);

	int Arr[n];

	printf("Enter %d numbers\n", n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &Arr[i]);
	}

	quickSort(Arr, 0, n-1);

	printf("After Sort\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", Arr[i]);	
	}
	printf("\n");
	
	return 0;
}


/*

Output:

Enter how many numbers: 7
Enter 7 numbers
4 5 34 37 236 2 7
After Sort
2	4	5	7	34	37	236

*/