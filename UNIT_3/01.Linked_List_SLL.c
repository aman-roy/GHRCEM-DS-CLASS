#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *head = NULL;

void createNode()
{
	struct Node *temp;
	temp = (struct Node *) malloc(sizeof(struct Node));
	printf("Enter Data: ");
	scanf("%d", &temp->data);
	if (head == NULL)
	{
		head = temp;
		head->next = NULL;
		return;
	}
	else
	{
		temp->next = head;
		head = temp;
	}

}


void displayNode()
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}



int main()
{
	int n;
	printf("How many nodes? ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		createNode();
	}

	printf("\n\nDisplaying Node\n");
	displayNode();
	return 0;
}

