// Write a program to insertAtHead a node at beginning of linked list

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

void insertAtTail(int num) {
    struct node *link = (struct node*) malloc (sizeof(struct node));

    link->data = num;
    link->next = NULL;

    current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = link;
    
    printf("\nInsertion of %d at Tail Successfull\n", num);
}

void insertInSortLL(int num) {
    sort();

    int length = lengthOfLL();

    current = head;
    next = head->next;
    for (int i = 0; i < length; i++) {
        if(num > current->data && num < next->data) {
            struct node *link = (struct node*) malloc (sizeof(struct node));
            link->data = num;
            link->next = next;

            current->next = link;
        }

        current = current->next;
        next = next->next;
    }
}

int lengthOfLL() {
    int length = 0;
    current = head;
    while (current->next != NULL) {
        length++; 
        current = current->next;
    }

    printf("\nLength of Linked List: %d\n\n", length);

    return length;
}

void sort() {
    int length = lengthOfLL();

    for (int i = 0; i < length; i++) {
        current = head;
        next = head->next;

        for (int j = 0; j < length; j++) {
            if(current->data > next->data) {
                int tempData = current->data;
                current->data = next->data;
                next->data = tempData;
            }

            current = current->next;
            next = next->next;
        }
    }

    printf("\nSorting Successful\n");
}



void show() {
    struct node *current = head;
    while (current != NULL)     {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

int main() {
    insertAtHead(5);
    insertAtHead(51);
    insertAtHead(65);
    insertAtTail(2);
    insertAtTail(24);
    insertAtHead(16);
    show();
    insertInSortLL(20);
    show();
    return 0;
}