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

struct Node* insertAfterValue(struct Node* head, int value, int data) {
struct Node* newNode = createNode(data);
struct Node* current = head;
while (current != NULL) {
if (current->data == value) {
newNode->next = current->next;
current->next = newNode;
return head;
}
current = current->next;
}
return head;
}
void deleteNodeValue(struct Node* head, int value) {
struct Node* current = head;
while (current->next != NULL) {
if (current->next->data == value) {
struct Node* temp = current->next;
current->next = temp->next;
free(temp);
return;
}
current = current->next;
}
}

struct Node* insertPosition(struct Node* head, int position, int data) {
struct Node* newNode = createNode(data);

if (position == 0) {
newNode->next = head;
return newNode;
}
struct Node* current = head;
int index = 0;
while (current != NULL && index < position - 1) {
current = current->next;
index++;
}
if (current == NULL) {
return head;
}
newNode->next = current->next;
current->next = newNode;
return head;
}

void deleteNodePosition(struct Node* head, int position) {
if (position == 0) {
struct Node* temp = head;
head = head->next;
free(temp);
return;
}
struct Node* current = head;
int index = 0;
while (current != NULL && index < position - 1) {
current = current->next;
index++;

}
if (current == NULL || current->next == NULL) {
return;
}
struct Node* temp = current->next;
current->next = temp->next;
free(temp);
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
int main() {
struct Node* head = NULL;
head = addFirstNode(head, 5);
addToLast(head, 10);
addToLast(head, 15);
head = insertAfterValue(head, 10, 25);
deleteNodeValue(head, 10);
head = insertPosition(head, 2, 20);
deleteNodePosition(head, 3);
printf("Linked List: ");

printList(head);

return 0;
}
