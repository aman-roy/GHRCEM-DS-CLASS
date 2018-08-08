#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int A[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
	if (rear == MAX - 1)
	{
		printf("Can't Insert! FULL\n");
		return;
	}

	if (front == -1)
	{
		front++;
	}
	printf("Enter data: ");
	scanf("%d", &A[++rear]);
}

void dequeue()
{
	if (front == -1)
	{
		printf("Empty!\n");
		return;
	}
	if (front > rear)
	{
		front = -1;
		printf("Empty!\n");
		return;
	}
	printf("data: %d\n", A[front++]);
}

void atFront()
{
	if (front == -1)
	{
		printf("Empty!\n");
		return;
	}
	printf("At the top: %d\n", A[front]);
}

int main()
{
	int choice;
	
	while(1)
	{
		printf("1. Enqueue\n2. Dequeue\n3. At front\n4. Exit\n\nEnter Choice: ");
	scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				atFront();
				break;
			default:
				exit(0);
		}
	}

}
