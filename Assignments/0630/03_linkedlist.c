/* Linked list */

#include<stdio.h>
#include<stdlib.h>

/* defining a structure for linked list */
struct node
{
	int info;
	struct node *link;
};

struct node *start;

//Creating a node
void create_node()
{
	struct node *temp, *ptr;
	temp = (struct node*)malloc(sizeof(struct node));

	if(temp == NULL)
	{
		printf("memory not allocated to create node\n");
		exit(0);
	}
	printf("Enter the data value for the node: ");
	scanf("%d",&temp->info);
	temp->link = NULL;
	
	if(start == NULL)
	{
		start = temp;
	}
	else
	{
		ptr = start;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}
		ptr->link = temp;
	}
	printf("Node created\n");
}

// Printing the node list
void printList(struct node* start)
{
	struct node* p;
	p = start;

	if(p == NULL)
	{
		printf("No nodes in the list\n");
		return;
	}
	else
	{
		while(p != NULL)
		{
			printf("%d \n", p->info);
			p = p->link; 
		}
	}
}

// count the number of nodes
void count()
{
	unsigned int cnt = 0;
	struct node *p;
	p = start;
	while(p != NULL)
	{
		p = p->link;
		cnt++;
	}
	printf("Number of nodes in the list: %d\n", cnt);
}

// search the item
void search()
{
	struct node *p = start;
	unsigned int item, pos = 1;

	printf("Enter the item to search: ");
	scanf("%d", &item);
	while(p != NULL)
	{
		if(p->info == item)
		{
			printf("Item %d found at position %d\n", item, pos);
			return;
		}
		pos++;
		p = p->link;
	}
	printf("Item %d not found\n",item );

}

// add node at beginning
void add_begin()
{
	struct node *tmp;

	tmp  = (struct node *)malloc(sizeof(struct node));
	if(tmp == NULL)
	{
		printf("Memory not allocated\n");
		return;
	}
	
	printf("Enter the data: ");
	scanf("%d", &tmp->info);
	tmp->link  = NULL;
	if(start == NULL)
	{
		start = tmp;	
	}
	else
	{
		tmp->link = start;
		start = tmp;
	}
	printf("Node created at the beginning\n");
}

// add node at the end
void add_end()
{
	struct node *end, *tmp;

	end = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d", &end->info);

	end->link = NULL;
	if(start == NULL)
	{
		start = end;
	}
	else
	{
		tmp = start;
		while(tmp->link != NULL)
		{
			tmp = tmp->link;
		}
		tmp->link = end;
	}

	printf("Node created at the end\n");
}

//Insertion after the node
void insert_afterNode()
{
	struct node *tmp, *p;
	int data, item, pos = 1;

	p =start;
	
	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
	{
		printf("Memory not allocated\n");
		return;
	}
	printf("Enter the data value of the node: ");
	scanf("%d", &tmp->info);

	printf("Enter the position for the new node to be inserted: ");
	scanf("%d", &item);

	while(p != NULL)
	{
		if(p->info == item)
		{	
			printf("Item %d found at position %d\n", item, pos);
			tmp->link = p->link;
			p->link = tmp;

			return;
		}
		pos++;
		p = p->link;
	}
	printf("%d is not found in the list\n", item);
	return;
}

void insert_beforeNode()
{
	struct node *tmp, *p;
	int data, item;

	tmp  = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	
	printf("Enter the new node data: ");
	scanf("%d", &tmp->info);

	printf("Enter the position for the new node to be inserted: ");
	scanf("%d",&item);

	p = start;

	while(p->link != NULL)
	{
		if(p->link->info == item)
		{
			tmp->link = p->link;
			p->link = tmp;
			return;
		}
		p = p->link;
	}
	printf("%d item not found in the list\n",item);
}

void insert_atPosition()
{
	struct node *tmp, *p;
	int pos, data, len = 0, i = 1;

	printf("Enter the positon to enter a new node: ");
	scanf("%d", &pos);

	//check the given position is less than the list
	p  = start;
	while(p != NULL)
	{
		p = p->link;
		len++;
	}

	printf("Number of nodes in the list: %d\n",len);
	if(pos > len)
	{
		printf("Given position is greater than the list\n");
		return;
	}
	else
	{
		 p = start;

		 tmp = (struct node*)malloc(sizeof(struct node));
		 if(tmp == NULL)
		 {
		 	printf("Memory not allocated\n");
			return;
		 }
		 printf("Enter the new node data: ");
		 scanf("%d", &tmp->info);
		 while(i < pos-1) //taking the link to given position
		 {
		 	p = p->link;
			i++;
		 }

		 tmp->link = p->link;
		 p->link = tmp;

		 printf("Node at created at the given position %d\n", pos);
	}
	
}

void delete_begin()
{
	struct node *tmp;
	tmp  = start;
	if(tmp == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{	
		start = start->link;
		printf("The deleted element is %d\n", tmp->info);
		free(tmp);
	}

}

void delete_end()
{
	struct node *tmp, *p;
	
	if(start == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else if(start->link == NULL)
	{
		p = start;
		start = NULL;
		printf("The deleted element %d\n", p->info);
		free(p);
		return;
	}
	else
	{
		p = start;
		while(p->link != NULL)
		{
			tmp = p;
			p = p->link;
		}
		tmp->link = NULL;
		printf("The deleted element is: %d\n", p->info);
		free(p);
	}
}

void delete_pos()
{
	struct node *tmp, *p;	
	int len = 1, i = 1, pos;

	p = start;	
	printf("Enter the position of the node to delete: ");
	scanf("%d", &pos);

	while(p != NULL)
	{
		p = p->link;
		len++;
	}

	if(pos >= len)
	{
		printf("Given position is greater than the list\n");
		return;
	}
	else
	{
		tmp = start;
		while(i < pos - 1)
		{
			tmp = tmp->link;
			i++;
		}
		p = tmp->link;
		tmp->link = p->link;
		free(p);
	}
}

int main()
{
	int choice = 0, item = 0;

	while(1)
	{	
		printf("	1. Create Node\n");
		printf("	2. Print the list\n");
		printf("	3. Count the nodes\n");
		printf("	4. Search the item\n");
		printf("	5. Add node at beginning\n");
		printf("	6. Add at end\n");
		printf("	7. Insert after a node\n");
		printf("	8. Insert before a node\n");
		printf("	9. Insert at position\n");
		printf("	10. Delete node at beginning\n");
		printf("	11. Delete node at ending\n");

		printf("	12. Delete node at the position\n");
		printf("	13: To exit\n\n");
		printf("	Enter the choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				create_node();
				break;
			case 2:
				printList(start);
				break;
			case 3: 
				count();
				break;
			case 4:
				search();
				break;
			case 5:
				add_begin();
				break;
			case 6:
				add_end();
				break;
			case 7: 
				insert_afterNode();
				break;
			case 8:
				insert_beforeNode();
				break;
			case 9: 
				insert_atPosition();
				break;
			case 10:
				delete_begin();
				break;
			case 11:
				delete_end();
				break;
			case 12:
				delete_pos();
				break;
			case 13:
				exit(0);
				break;
			default:
				printf("wrong choice \n");
				break;

		}
	}
	return 0;
}

