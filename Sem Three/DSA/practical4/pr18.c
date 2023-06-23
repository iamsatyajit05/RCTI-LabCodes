// Write a program to construct binary search tree using 27,14,35,10,19,31,42

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->value = data;
    temp->left = NULL;
    temp->right = NULL;

    if(root == NULL) {
        root = temp;
    }

    else {
        struct node *current = root;
        
        while (1) {
            struct node *tempParent = current;

            if(data < tempParent->value) {
                current = current->left;

                if(current == NULL) {
                    tempParent->left = temp;
                    break;
                }
            }
            else if(data > tempParent->value) {
                current = current->right;

                if(current == NULL) {
                    tempParent->right = temp;
                    break;
                }
            }

            if (current == NULL) {
                break;
            }
            
        }
    }

    printf("Insertion of %d is succesful!\n", data);
}

int main() {
    insert(27);
    insert(14);
    insert(35);
    insert(10);
    insert(19);
    insert(31);
    insert(42);

    return 0;
}