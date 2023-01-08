// Write a program to implement inorder, preorder and postorder traversal methods in binary search tree

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

void preorderShow(struct node *temp) {
    if (temp == NULL) {
        printf("Empty Tree\n");
    }
    else {
        printf("%d ", temp->value);
    }

    if(temp->left != NULL) {
        preorderShow(temp->left);
    }

    if(temp->right != NULL) {
        preorderShow(temp->right);
    }
}

void inorderShow(struct node *temp) {
    if (temp == NULL) {
        printf("Empty Tree\n");
    }

    if(temp->left != NULL) {
        inorderShow(temp->left);
    }

    printf("%d ", temp->value);

    if(temp->right != NULL) {
        inorderShow(temp->right);
    }
}

void postorderShow(struct node *temp) {
    if (temp == NULL) {
        printf("Empty Tree\n");
    }

    if(temp->left != NULL) {
        postorderShow(temp->left);
    }

    if(temp->right != NULL) {
        postorderShow(temp->right);
    }

    printf("%d ", temp->value);
}

int main() {
    // insert() from practial 18
    insert(27);
    insert(14);
    insert(35);
    insert(10);
    insert(19);
    insert(31);
    insert(42);

    printf("\nPre-Order: ");
    preorderShow(root);

    printf("\n\nIn-Order: ");
    inorderShow(root);

    printf("\n\nPost-Order: ");
    postorderShow(root);
    return 0;
}