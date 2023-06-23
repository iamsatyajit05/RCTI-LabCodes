// Write a program to insert a node at beginning of linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtHead(int num) {
    struct node *link = (struct node*) malloc (sizeof(struct node));

    link->data = num;
    link->next = head;

    head = link;

    printf("\nInsertion of %d at Head Successfull\n", num);
}

void showLL() {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
        struct node *current = head;

        printf("\nLinked List: ");
        while (current != NULL)     {
            printf("%d ", current->data);
            current = current->next;
        }

        printf("\n");
    }
}

int main() {
    insertAtHead(5);
    insertAtHead(51);
    insertAtHead(65);
    insertAtHead(16);

    showLL();
    
    return 0;
}