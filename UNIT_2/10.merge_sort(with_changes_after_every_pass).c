#include <stdio.h>

int merge(int A[], int left, int mid, int right, int n)
{
	static int count = 1;

	int p = left;
	int q = mid+1;

	int newArr[(right-left)+1];
	int temp = 0;

	while(p <= mid || q <= right)
	{
		if (p > mid)
			newArr[temp++] = A[q++];

		else if(q > right)
			newArr[temp++] = A[p++];

		else if (A[p] < A[q])
			newArr[temp++] = A[p++];
		else
			newArr[temp++] = A[q++];
	}

	for (int i = 0; i < temp; ++i)
	{
		A[left++] = newArr[i];
	}

	printf("After %d pass\n", count++);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", A[i]);
	}
	printf("\n");

}

int mergeSort(int A[], int l, int r, int n)
{
	if (l < r)
	{
		int mid = (l+r)/2;
		mergeSort(A, l, mid, n);
		mergeSort(A, mid+1, r, n);
		merge(A, l, mid, r, n);
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

	mergeSort(Arr, 0, n-1, n);

	printf("\n\nAfter Sort\n");
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
52 47 78 23 4
After Sort
4	23	47	52	78

*/