//making head pointer global is a way to update the head 
//pointer after an element is deleted
struct node{
	int data;
	struct node *next;
};
struct node * head=NULL;
void deleteFirst()
{
	struct node *temp=head;
	head=head->next;
	free(temp);
}
//using doublepointer
//we can pass pointer to the head pointer to modify
// the head pointer in our deleteFirst() function.
void deleteFirst(struct node **head_ref)
{
	if(*head_ref!=NULL)
	{
		struct node *temp=*head_ref;
		*head_ref=(*head_ref)->next;
		free(temp);
	}
}
