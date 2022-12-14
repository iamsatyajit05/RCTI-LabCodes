// Implement simple structure programs using pointers

#include <stdio.h>

struct Game {
    char name[30];
    int code;
    float price;
};

int main() {
    struct Game s1;
    struct Game *ptr = &s1;

    printf("Enter name of game: ");
    gets(s1.name);

    printf("Enter code of game: ");
    scanf("%d", &s1.code);

    printf("Enter price of game: ");
    scanf("%f", &s1.price);

    printf("\nGame's Details: \n");
    printf("Name: %s\n", (*ptr).name);
    printf("Code: %d\n", (*ptr).code);
    printf("Price: %.2f\n", (*ptr).price);

    return 0;
}