// Write a program to count node (at any given position) in linked list.

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

void searchLL(int num) {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
        current = head;

        int count = 1, isFound = 0;
        while (current != NULL) {
            if (current->data == num) {
                isFound = 1;
                break;
            }
            count++;
            current = current->next;
        }

        if(isFound) {
            printf("\n%d is found in Linkedlist at %d\n", num, count);
        }
        else {
            printf("\n%d is not in Linkedlist\n", num);
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

    searchLL(69);
    searchLL(5);
    
    return 0;
}