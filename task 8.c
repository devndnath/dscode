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
struct Node* addFirstNode(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}
void addToLast(struct Node* head, int data) {
struct Node* newNode = createNode(data);
if (head == NULL) {
head = newNode;
return;
}
struct Node* current = head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
}
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d", current->data);
if (current->next != NULL) {
printf("->");
}
current = current->next;
}
printf("\n");
}
int main() {
struct Node* head = NULL;

head = addFirstNode(head, 5);
addToLast(head, 10);
addToLast(head, 15);
printf("Linked List: ");
printList(head);
return 0;
}
