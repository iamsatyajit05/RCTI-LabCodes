// Write a program to insert a node at end of linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void insertAtTail(int num) {
    struct node *link = (struct node*) malloc (sizeof(struct node));
    link->data = num;

    if (head == NULL) {
        link->next = head;

        head = link;
    }
    
    else {
        link->next = NULL;

        current = head;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = link;
    }

    printf("\nInsertion of %d at Tail Successfull\n", num);
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
    insertAtTail(2);
    insertAtTail(4);
    insertAtTail(24);
    insertAtTail(16);

    showLL();
    
    return 0;
}