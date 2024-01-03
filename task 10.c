#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}
struct Node* insert(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d", current->data);
if (current->next != NULL) {
printf(" -> ");
}
current = current->next;
}
printf("\n");
}

struct Node* reverseList(struct Node* head) {
struct Node* prev = NULL;
struct Node* current = head;
struct Node* next = NULL;
while (current != NULL) {
next = current->next;
current->next = prev;
prev = current;
current = next;
}
return prev;
}
int main() {
struct Node* head = NULL;

head = insert(head, 5);
head = insert(head, 25);
head = insert(head, 20);
printf("Original: ");
printList(head);
head = reverseList(head);
printf("Reversed: ");
printList(head);
return 0;
}
