/* Linked list */

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int info;
	struct node *link;
};
struct node *head;

void create_node()
{
	struct node *newnode, *tmp;
	newnode = (struct node*)malloc(sizeof(struct node));

	if(newnode ==  NULL)
	{
		printf("memory not allocated to create node\n");
		return;
	}
	else
	{
		printf("Enter the info: ");
		scanf("%d", &newnode->info);
		newnode->link = NULL;

		if(head ==  NULL)
		{
			head = newnode;		
		}
		else
		{
			tmp = head;
			while(tmp->link != NULL)
			{	
				tmp = tmp->link;
			}
			tmp->link = newnode;
		}
	}
	printf("Node is created\n");
}

void Display_list()
{
	struct node *p;
	p = head;

	if(p == NULL)
	{
		printf("No nodes in the list\n");
		return;
	}
	else
	{
		while(p != NULL)
		{
			printf("%d ", p->info);
			p = p->link;
		}
	}
	printf("\n");
}

int count_list()
{
	struct node *p;
	int count = 0;
	p = head;
	while(p != NULL)
	{
		count++;
		p = p->link;
	}
	return count;
}

void insert_position()
{
	struct node *tmp, *p;
	int pos, cnt;

	printf("Enter the position to create a node: ");
	scanf("%d", &pos);
	cnt  = count_list();

	if(pos > cnt)
	{
		printf("Given postion %d is greater than the list\n", pos);
		printf("Node is not created\n");
		return;
	}
	else
	{
		tmp = (struct node*)malloc(sizeof(struct node));
		if(tmp == NULL)
		{
			printf("memory is not allocated \n");
			return;
		}
		else
		{
			printf("Enter the data: ");
			scanf("%d", &tmp->info);
			tmp->link = NULL;

			p =  head;
			cnt = 0;
			while(p->link != NULL)
			{
				cnt++;
				if(cnt == (pos-1))
				{
					tmp->link = p->link;
					p->link = tmp;
					break;		
				}
				p = p->link;
			}
			
		}
	}
	printf("Node created at the given position %d\n", pos);
}

void insert_end()
{
	struct node *newnode, *tmp;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("memory is not allocated\n");
		return;
	}
	else
	{
		printf("Enter the value for new node: ");
		scanf("%d", &newnode->info);
		newnode->link =  NULL;
		tmp = head;

		while(tmp->link != NULL)
		{
			tmp = tmp->link; 
		}
		tmp->link = newnode;
		printf("New node is created  at the end\n");
	}
}

void getMiddleNode()
{
	struct node *slow, *fast;
	slow = fast = head;

	if(head != NULL)
	{
		while(fast != NULL && fast->link != NULL)
		{
			slow = slow->link;
			fast = fast->link->link;
		}
		printf("Middle of the node is %d\n", slow->info);
	}
	else
		printf("List is empty\n ");
}

void print_beforeLastNode()
{
	struct node *p, *tmp;

	p = head;
	if(head != NULL)
	{
		while(p->link != NULL)
		{
			tmp = p;
			p = p->link;
		}
		printf("Node before last node %d\n", tmp->info);
	}
	else
		printf("List is empty\n");
}

void findKthNode()
{
	struct node *kthNode, *p;
	int k, n, pos;
	printf("Enter the kth node of a list: ");
	scanf("%d", &k);

	n = count_list();
	if(k > n)
	{
		printf("Given number is larger than the nodes in the list\n");
		return;
	}
	else
	{
		int cnt = 1;
		pos = n/k;
		p = head;
		while(p->link != NULL)
		{
			if(cnt == pos)
			{
				printf("Value at %d/%d  thNode in a list is : %d\n", n, k, kthNode->info);
				break;
			}
			kthNode = p->link;
			cnt++;
			p = p->link;
		}
	}

}

void reverse_list()
{
	struct node *prevNode, *currNode, *nextNode;
	prevNode = NULL;
	currNode = nextNode = head;

	while(nextNode != NULL)
	{
		nextNode = nextNode->link;
		currNode->link = prevNode;
		prevNode = currNode;
		currNode = nextNode;
	}
	head = prevNode;
	Display_list();
}

void reverse(struct node *p)
{
	if(p->link == NULL)
	{
		head = p;
		return;
	}

	reverse(p->link);
	struct node *q = p->link;
	q->link = p;
	p->link = NULL;
}

void printlist_recursive(struct node* p)
{
	if(p == NULL)
	{
		printf("\n");
		return;
	}
	printf("%d ", p->info);
	printlist_recursive(p->link);
}

void printlist_recursive_reverseOrder(struct node *p)
{
	if(p == NULL)
	{
		printf("\n");
		return;
	}
	printlist_recursive_reverseOrder(p->link);
	printf("%d", p->info);
}

int main()
{
	int choice, count = 0;
	while(1)
	{
		printf("	1. Create a Node\n");
		printf("	2. Display the list\n");
		printf("	3. count the nodes in the list\n");
		printf("	4. Insert at position\n");
		printf("	5. Insert at end\n");
		printf("	6. Get middle of the node\n");
		printf("	7. Print before last node\n");
		printf("	8. Find the given fractional node\n");
		printf("	9. Reverse linked list iterative method\n");
		printf("	10. Reverse list - recursive method\n");
		printf("	11. Printlist using recursion\n ");
		printf("	12. Print list in reverse order\n");
		printf("	13. Exit\n");

		printf("	Enter the option: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: 
				create_node();
				break;
			case 2:
				Display_list();
				break;
			case 3:
				count = count_list();
				printf("Nodes in th list: %d\n", count);
				break;

			case 4:
				insert_position();
				break;
			case 5:
				insert_end();
				break;
			case 6:
				getMiddleNode();
				break;
			case 7:
				print_beforeLastNode();
				break;
			case 8: 
				findKthNode();
				break;
			case 9:
				reverse_list();
				break;
			case 10:
				reverse(head);
				break;
			case 11:
			       	printlist_recursive(head);
				 break;
			case 12:
				 printlist_recursive_reverseOrder(head);
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
