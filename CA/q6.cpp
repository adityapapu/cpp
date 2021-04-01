// A complete working C program to demonstrate all
// insertion before a given node
#include <stdio.h>
#include <stdlib.h>
 
// A linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
 
 
void push(Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    Node* new_node = new Node(); 
 
    Node* last = *head_ref; /* used in step 5*/
 
    /* 2. put in the data */
    new_node->data = new_data; 
 
    /* 3. This new node is going to be the last node, so 
        make next of it as NULL*/
    new_node->next = NULL; 
 
    /* 4. If the Linked List is empty, then make the new 
        node as head */
    if (*head_ref == NULL)
    { 
        new_node->prev = NULL; 
        *head_ref = new_node; 
        return; 
    } 
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 
 
    /* 6. Change the next of last node */
    last->next = new_node; 
 
    /* 7. Make last node as previous of new node */
    new_node->prev = last; 
 
    return; 
} 
// This function prints contents of linked list starting
// from the given node
void printList(struct Node* node)
{
    struct Node* last;
    printf("\nPrinting the alternate nodes\n");
    while (node != NULL) 
    {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
        node=node->next;
    }
}
 
/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
    push(&head, 70);
        push(&head, 71);
    push(&head, 20);
        push(&head, 30);
    push(&head, 1);
 
    push(&head, 4);
    printList(head);
    getchar();
    return 0;
}
