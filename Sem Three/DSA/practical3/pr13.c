// Write a program to insert a node in sorted linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *next = NULL;

void insertInSortLL(int num) {
    struct node *link = (struct node*) malloc (sizeof(struct node));
    link->data = num;
    
    if (head == NULL) {
        link->next = head;
        head = link;
    }

    else {
        int length = lengthOfLL(), isInsert = 0;

        current = head;
        next = head->next;

        if (current->data >= num) {
            link->next = head;
            head = link;
            isInsert = 1;
        }
        
        else {
            for (int i = 0; i < length; i++) {
                if(num > current->data && num <= next->data) {
                    struct node *link = (struct node*) malloc (sizeof(struct node));
                    link->data = num;
                    link->next = next;

                    current->next = link;
                    isInsert = 1;
                    break;
                }

                current = current->next;
                next = next->next;
            }

            if (isInsert == 0) {
                link->next = NULL;
                current->next = link;
            }
        }
    }

    printf("\nInsertion of %d at Sorted Position Successfull\n", num);
}

int lengthOfLL() {
    if (head == NULL) {
        return;
    }

    int length = 0;
    current = head;
    while (current->next != NULL) {
        length++; 
        current = current->next;
    }

    return length;
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
    insertInSortLL(5);
    insertInSortLL(51);
    insertInSortLL(65);
    insertInSortLL(16);
    insertInSortLL(12);

    showLL();
    
    return 0;
}