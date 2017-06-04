#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct node
{
	int data;
	struct node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
 
void push(struct node** head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data =  new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void addafter(struct node ** head_ref, int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	
	new_node->data = new_data;
	new_node->next = NULL;

	if(head_ref == NULL)
	{
		printf("Head NULL\n");
		*head_ref = new_node;
		head_ref->next = NULL; 
	}
	else
	{
		new_node->next = *head_ref;
		head_ref = new_node;		
	}
}




/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */

void deleteNode(struct node **head_ref, int key)
{
	// Store head node
	struct node *temp = *head_ref, *prev;

	// If head node itself holds the key to be deleted
	if( temp != NULL && temp->data == key)
	{
		*head_ref =  temp->next; // Changed head
		free(temp);		// free old head
		return;
	}

	// Search for the key to be deleted, keep tract of the
	// previous node as we need to change 'prev->next'
	while(temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

	// If key was not present in linked list
	if(temp == NULL) return;

	// Unlinked the node from linked list
	prev->next =  temp->next;
	
	free(temp);

}

// This function prints contents of linked list starting from
// the given node

void printList(struct node* node)
{
	while(node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
	printf("\n");
}

/* Drier program to test above functions */
int main()
{
	// Start with the empty list
	struct node* head = NULL;

	push(&head, 7);
	push(&head, 1);
	push(&head, 3);
	push(&head, 2);
	//push(&head, 7);
	//push(&head, 7);

	printf(" Create Linked list : \n");
	printList(head);

	deleteNode(&head, 1);
	printf(" after delete : \n");
	printList(head);

	return 0;

}


























