#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
int main()
{
	struct node obj1,obj2;
	obj1.data=20;
	obj1.next=NULL;
	obj2.data=90;
	obj2.next=NULL;
	obj1.next=&obj2;
	printf("%d",obj1.next->data);
	return 0;
}