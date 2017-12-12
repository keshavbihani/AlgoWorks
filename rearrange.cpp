/*Given a singly linked list, with some positive numbers (valid numbers) and zeros (invalid numbers). Convert the linked list in such a way that if next valid number is same as current number, double its value and replace the next number with 0. After the modification, rearrange the linked – list such that all 0’s are shifted to the end.
E.g.    2 -> 2 -> 0 -> 4 -> 0 -> 8
Ans: – 4 -> 4 -> 8 -> 0 -> 0 -> 0

MICROSOFT QUESTION
*/
#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};
/* Function to push a node */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
            
    /* put in the data  */
    new_node->data  = new_data;
                
    /* link the old list off the new node */
    new_node->next = (*head_ref);    
        
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
void printList(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
}    
 
struct Node * rearrange(struct Node * head)
{   
    if(head==NULL)return NULL;
    struct Node *prev=head;
    struct Node *curr=head->next;
    
    while(curr)
    {
        if(prev->data== curr->data)
        {
            prev->data=2*prev->data;
            curr->data=0;
        }
        prev=curr;
        curr=curr->next;
    }
    //printList(head);
    prev=head;
    curr=head->next;
    while(curr)
    {
        while(prev && prev->data)
        {
            prev=prev->next;
        }
        while(curr && curr->data==0)
        {
            curr=curr->next;
        }
        if(curr && prev)
        {
            int temp=curr->data;
            curr->data=prev->data;
            prev->data=temp;
        }
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 8);
	push(&head, 0);
	push(&head, 4); 
	push(&head, 0);
	push(&head, 2);
	push(&head, 2);
	//push(&head, 2);
	
   struct Node *root=rearrange(head);
   printList(head);
}
