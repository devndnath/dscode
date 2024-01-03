#include <stdio.h>
void Array(int arr[], int size, int i) {
if (i == size) {
return;
}
printf("%d ", arr[i]);
Array(arr, size, i + 1);
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
Array(arr, size, 0);
return 0;
}
