// Write a program to count node (at any given position) in linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

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

int lengthOfLL() {
    if (head == NULL) {
        return 0;
    }

    int length = 1;
    current = head;
    while (current->next != NULL) {
        length++; 
        current = current->next;
    }

    printf("\nLength of Linked List: %d\n", length);

    return length;
}

int main() {
    insertAtHead(5);
    insertAtHead(51);
    insertAtHead(78);
    insertAtHead(65);
    insertAtHead(16);

    showLL();

    lengthOfLL();
    
    return 0;
}