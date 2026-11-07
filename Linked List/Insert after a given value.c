
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *newNode;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next=NULL;

    temp = malloc(sizeof(struct Node));
    temp->data = 20;
    head->next = temp;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 30;
    temp->next = newNode;

    newNode->next = NULL;

    // Insert 25 after 20

    temp = head;

    while (temp != NULL && temp->data != 20) {
        temp = temp->next;
    }

    if (temp != NULL) {
        struct Node *newNode = malloc(sizeof(struct Node));

        newNode->data = 25;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display Linked List

    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
