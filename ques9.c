#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

struct Node* newNode(int d) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = d; n->next = NULL; return n;
}

void insertEnd(struct Node **head, int d) {
    struct Node *n = newNode(d);
    if (*head == NULL) { *head = n; return; }
    struct Node *t = *head;
    while (t->next) t = t->next;
    t->next = n;
}

void deleteNode(struct Node **head, int d) {
    struct Node *t = *head, *prev = NULL;
    while (t && t->data != d) { prev = t; t = t->next; }
    if (!t) { printf("Not found!\n"); return; }
    if (!prev) *head = t->next;
    else prev->next = t->next;
    free(t);
    printf("Deleted %d\n", d);
}

void display(struct Node *head) {
    printf("List: ");
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    display(head);
    deleteNode(&head, 20);
    display(head);
    return 0;
}