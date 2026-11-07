#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *newNode;
    int pos, i;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    temp = malloc(sizeof(struct Node));
    temp->data = 20;
    head->next = temp;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 30;
    temp->next = newNode;

    newNode->next = NULL;

    // Insert at any position

    printf("Enter position: ");
    scanf("%d", &pos);

    newNode = malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        temp = head;

        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Invalid Position");
            return 0;
        }

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
