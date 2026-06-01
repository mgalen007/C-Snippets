#include <stdio.h>
#include <string.h>

typedef struct Node {
    char name[10];
    struct Node *next;
} Node;

Node head, n1, n2, n3, tail;

int main() {
    head.next = &n1;
    strcpy(head.name, "Head");

    n1.next = &n2;
    strcpy(n1.name, "Node 1");

    n2.next = &n3;
    strcpy(n2.name, "Node 2");

    n3.next = &tail;
    strcpy(n3.name, "Node 3");

    strcpy(tail.name, "Tail");

    Node *current = &head;

    while (current->next != NULL) {
        printf("%s\n", current->name);
        current = current->next;
    }
}

