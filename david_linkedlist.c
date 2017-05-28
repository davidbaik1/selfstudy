#include <stdio.h>
#include <stdlib.h>

//Define Node
typedef struct node{
	int id;
	struct node* next;
}NODE;

NODE* start = NULL;
int value = 1;

void insert(void);
void delete(void);

void print(void)
{
	NODE *cur = NULL;
	for(cur = start ; cur != NULL ; cur=cur->next)
		printf("%d-> ",cur->id);

	printf("\n");

}

void insert_end(NODE *end, NODE* new_node)
{
	end->next = new_node;
}

void insert_start(NODE* new_node)
{
	new_node->next = start;
	start = new_node;
}

void insert_mid(NODE *mid, NODE* new_node)
{
	new_node->next = mid->next;
	mid->next = new_node;
}


void insert(void)
{
	NODE *cur = NULL;
	NODE *new_node = NULL;
	
	int sel;
	int id;

	if(start == NULL)
	{
		new_node = (NODE*)malloc(sizeof(NODE)); // Create Node
		new_node->next = NULL; // Init Pointer
		new_node->id = value++;
		start = new_node; //set new_node to start
	}
	else
	{
		printf("1. Start Insert\n");
		printf("2. End Insert\n");
		printf("3. Mid Insert\n");
		scanf("%d", &sel);


		new_node = (NODE*)malloc(sizeof(NODE)); // Create Node
		new_node->next = NULL;
		new_node->id = value++;
		
		if (sel == 1)
		{
			insert_start(new_node);
		}
		else if( sel == 2)
		{
		//Cur indicates last node
		for(cur = start ; cur->next != NULL ; cur=cur->next);
		insert_end(cur, new_node);
		}
		else if ( sel == 3)
		{
			print();
			printf("\nInput Node ID to insert after");
			scanf("%d", &id);

			for(cur=start ; cur != NULL ; cur=cur->next)
			{
				if(cur->id == id)
					break;
			}
			insert_mid(cur, new_node);
		}
		else
		{
			free(new_node);
//			return 0;
		}
	}
}

void delete_start()
{
	NODE* tmp;
	
	tmp =  start->next;
	free(start);
	start = tmp;
}

void delete_end(NODE* pre_del)
{
	free(pre_del->next);
	pre_del->next = NULL;
}

void delete_mid(NODE* pre_del)
{
	NODE* del;
	
	del = pre_del->next; //To be delted 
	pre_del->next = del->next; //Connect previous node to next next node
				// pre_del->next = pre_del->next->next;
	free(del);
}

void delete_point(NODE* del_point)
{
	NODE* tmp;
	tmp = del_point->next;

	del_point->id = tmp->id;
	del_point->next = tmp->next;

	free(tmp);

}

void delete(void)
{
	int sel;
	int id;
	NODE *cur;
	
	
	printf("1. Start delete\n");
	printf("2. End delete\n");
	printf("3. Mid delete\n");
	printf("4, Point delete\n");
	scanf("%d", &sel);
	
	if(start == NULL) // There is no NODE
		return;
	else if(start->next == NULL) // Only one NODE
	{
		free(start);
		start = NULL;
		return;
	}


	if(sel == 1)
	{
		delete_start(start);
	}
	else if(sel == 2)
	{
		for(cur = start; cur->next->next != NULL ; cur = cur->next);
		delete_end(cur);
	}
	else if(sel == 3)
	{
		print();
		printf("\nInput Node ID to be deleted");
		scanf("%d", &id);
	
		for(cur=start ; cur != NULL ; cur=cur->next)
		{
			if(cur->next->id == id)  // check out
				break;
		}
		delete_mid(cur);
	}
	else if(sel == 4)
	{
		print();
		printf("\n Input Node to be deleted David");
		scanf("%d", &id);

		for(cur=start ; cur != NULL ; cur=cur->next)
		{
			if(cur->id == id)
				break;
		}	
		delete_point(cur);
	}


}

void free_all()
{
	NODE* cur;
	NODE* del = start;
	
	if(start == NULL)
		return;
	else if(start->next ==  NULL)
		free(start);
	else
	{
		for(cur=start->next ; cur !=NULL ; cur=cur->next)
		{
			free(del);
			del = cur;
		}	
		free(del);
	}
	start = NULL;
}

int main(void)
{
	int sel;
	
	while(1)
	{
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Print\n");
		printf("0. End\n");
		printf("===============\n");
		scanf("%d", &sel);
		
		switch(sel)
		{
			case 0:
				free_all();
				return 0;
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				print();
				break;
			default:
				printf("\n Wrong Input");
				break;
		}

	}


}

