// Implement insertion of node at any position in linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *next = NULL;


void insertAtGivenPosition(int num, int loc) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = num;

    if(head == NULL) {
        link->next = head;
        head = link;
    }
    else {
        current = head;
        next = current->next;

        for (int i = 1; i < loc-1; i++) {
           current = next;
           next = current->next;
        }
        
        link->next = next;

        current->next = link;
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
    insertAtGivenPosition(5,0);
    insertAtGivenPosition(51,0);
    insertAtGivenPosition(65,1);
    insertAtGivenPosition(16,2);
    insertAtGivenPosition(12,1);

    showLL();
    
    return 0;
}