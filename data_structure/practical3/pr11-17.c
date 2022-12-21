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
    if (head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    
    else {
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
}

void insertInSortLL(int num) {
    if (head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }

    else {
        sortLL();

        int length = lengthOfLL(), isInsert = 0;

        current = head;
        next = head->next;

        if (current->data >= num) {
            insertAtHead(num);
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
                insertAtTail(num);
            }
        }
    }
}

void insertAtGivenPosition(int num, int loc) {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
        current = head;
        next = current->next;

        for (int i = 1; i < loc-1; i++) {
           current = next;
           next = current->next;
        }
        
        struct node *link = (struct node*) malloc(sizeof(struct node));

        link->data = num;
        link->next = next;

        current->next = link;
    }
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

    printf("\nLength of Linked List: %d\n", length);

    return length;
}

void sortLL() {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
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
}

void searchLL(int num) {
    if(head == NULL) {
        printf("\nEmpty Linked List, Please add a node at start\n");
    }
    else {
        current = head;
        next = current->next;

        int count = 1;
        while (current != NULL) {
            if (current->data == num) {
                printf("\n%d is found in Linkedlist at %d\n", num, count);
                break;
            }
            count++;
            current = current->next;
            next = next->next;
        }
    }
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
    insertInSortLL(20);
    insertAtHead(5);
    insertAtTail(2);
    insertAtTail(4);
    insertAtHead(51);
    insertAtHead(65);
    insertAtTail(24);
    insertAtHead(16);
    showLL();
    insertInSortLL(20);
    showLL();
    insertInSortLL(1);
    showLL();
    insertInSortLL(72);
    showLL();
    insertAtGivenPosition(22, 2);
    insertAtGivenPosition(52, 3);
    showLL();
    searchLL(72);
    showLL();
    deleteLL(3);
    showLL();
    return 0;
}