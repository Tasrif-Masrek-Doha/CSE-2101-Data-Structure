#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *newNode, *prev;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    temp = malloc(sizeof(struct Node));
    temp->data = 20;
    head->next = temp;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 30;
    temp->next = newNode;

    newNode->next = NULL;

    // Insert 15 before 20

    temp = head;
    prev = NULL;

    while (temp != NULL && temp->data != 20) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        newNode = malloc(sizeof(struct Node));
        newNode->data = 15;

        newNode->next = temp;

        if (prev == NULL) {
            head = newNode;
        } else {
            prev->next = newNode;
        }
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
