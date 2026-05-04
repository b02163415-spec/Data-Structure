#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void create()
{
    struct node *newnode, *prev;
    int choice = 1;

    while(choice)
    {
        newnode = (struct node*) malloc(sizeof(struct node));

        printf("Enter element: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            prev = newnode;
        }
        else
        {
            prev->next = newnode;
            prev = newnode;
        }

        printf("Do you want to continue (1/0): ");
        scanf("%d", &choice);
    }
}
void display()
{
	struct node * temp;
	temp = head;
	while(temp != NULL)
	{
		printf("%d->",temp->data);
		temp = temp-> next;
	}
	printf("NULL\n");
}

int main()
{
    create();
    return 0;
}
