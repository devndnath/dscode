#include <stdio.h>
void Insertion(int arr[], int n){
if (n <= 1){
return;
}

Insertion( arr, n-1 );
int nth = arr[n-1];
int j = n-2;
while (j >= 0 && arr[j] > nth){
arr[j+1] = arr[j];
j--;
}
arr[j+1] = nth;
}
int main(){
int array[] = {10,30,20,50,40};

int n = sizeof(array)/sizeof(array[0]);
printf("Unsorted Array\n");
for (int i=0; i < n; i++)
printf("%d ",array[i]);
Insertion(array, n);
printf("\nSorted Array\n");
for (int i=0; i < n; i++)
printf("%d ",array[i]);
return 0;
}
