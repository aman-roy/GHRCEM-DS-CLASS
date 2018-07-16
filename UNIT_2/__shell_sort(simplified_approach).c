#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void shellSort(int A[], int n)
{
	for (int gap = n/2; gap != 0; gap /= 2)
	{
		int i, temp = gap;

		for (i = 0; temp < n; ++i, ++temp)
		{
			if (A[i] > A[temp])
			{
				swap(&A[i], &A[temp]);
			}
		}

		for (--i, --temp; i >= 0; --i, --temp)
		{
			if (A[i] > A[temp])
			{
				swap(&A[i], &A[temp]);
			}
		}
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

	shellSort(Arr, n);

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

Enter how many numbers: 5
Enter 5 numbers
76 2 56 24 42 
After Sort
2	24	42	56	76	

*/