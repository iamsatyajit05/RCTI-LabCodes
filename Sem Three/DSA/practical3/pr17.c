// Write a program to delete a node (at any given position) in linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *next = NULL;

void insertAtHead(int num) {
    struct node *link = (struct node*) malloc (sizeof(struct node));

    link->data = num;
    link->next = head;

    head = link;

    printf("\nInsertion of %d at Head Successfull\n", num);
}

void deleteLL(int loc) {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
        current = head;
        next = current->next;

        int count = 1;
        while (current != NULL) {
            if (count == (loc-1)) {
                current->next = next->next;

                printf("\n%d is successful deleted from Linkedlist\n", next->data);
                break;
            }
            count++;
            current = current->next;
            next = next->next;
        }
    }
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
    insertAtHead(78);
    insertAtHead(65);
    insertAtHead(16);

    showLL();

    deleteLL(2);
    deleteLL(4);
    
    showLL();
    
    return 0;
}