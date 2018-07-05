#include <stdio.h>

// Function protype: For checking an element present in any array or not
int isPresent(int item, int X[], int sizeOfX);

// Function prototype: Set functions
void Union(int A[], int n1, int B[], int n2); 
void Intersection(int A[], int n1, int B[], int n2); 
void Difference(int A[], int n1, int B[], int n2); 
void SymDifference(int A[], int n1, int B[], int n2); 


int main()
{
	// Variable declaration
	int n1, n2, ch;
	int A[100], B[100];

	// Taking the size of first array
	printf("How many items in first list: ");
	scanf("%d", &n1);
	// Taking all the values in first array
	printf("Enter %d items: \n", n1);
	for (int i = 0; i < n1; ++i)
	{
		scanf("%d", &A[i]);
	}

	// Taking the size of second array
	printf("How many items in second list: ");
	scanf("%d", &n2);
	// Taking all the values in second array
	printf("Enter %d items: \n", n2);
	for (int i = 0; i < n2; ++i)
	{
		scanf("%d", &B[i]);
	}

	// Taking the choice
	printf("Press 1(Union), 2(Intersection), 3(Difference), 4(SymDifference)\n");
	scanf("%d", &ch);

	// According to choice performing set operation
	switch(ch)
	{
		case 1:
			Union(A, n1, B, n2);
			break;
		case 2:
			Intersection(A, n1, B, n2);
			break;
		case 3:
			Difference(A, n1, B, n2);
			break;
		case 4:
			SymDifference(A, n1, B, n2);
			break;
		default:
			printf("Wrong Choice!\n");
			break;
	}

	return 0;
}


int isPresent(int item, int X[], int sizeOfX)
{
	for (int i = 0; i < sizeOfX; ++i)
	{
		if (item == X[i])
		{
			return 1;
		}
	}

	return 0;
}


void Union(int A[], int n1, int B[], int n2)
{
	printf("Union : ");
	for (int i = 0; i < n1; ++i)
	{
		printf("%d    ", A[i]);
	}

	for (int i = 0; i < n2; ++i)
	{
		if (!isPresent(B[i], A, n1))
		{
			printf("%d    ", B[i]);
		}
	}
	printf("\n");
}


void Intersection(int A[], int n1, int B[], int n2)
{
	printf("Intersection: ");

	for (int i = 0; i < n1; ++i)
	{
		if (isPresent(A[i], B, n2))
		{
			printf("%d    ", A[i]);
		}
	}

	printf("\n");
}


void Difference(int A[], int n1, int B[], int n2)
{
	printf("Difference: ");
	for (int i = 0; i < n1; ++i)
	{
		if (!isPresent(A[i], B, n2))
		{
			printf("%d    ", A[i]);
		}
	}
	printf("\n");
}


void SymDifference(int A[], int n1, int B[], int n2)
{
	printf("Symmetric Difference: ");
	for (int i = 0; i < n1; ++i)
	{
		if (!isPresent(A[i], B, n2))
		{
			printf("%d    ", A[i]);
		}
	}

	for (int i = 0; i < n2; ++i)
	{
		if (!isPresent(B[i], A, n1))
		{
			printf("%d    ", B[i]);
		}
	}

	printf("\n");
}