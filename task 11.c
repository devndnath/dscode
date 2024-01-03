#include <stdio.h>
int main() {
    int arr[]={90, 80, 30, 70, 20, 10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp, t;
    for (int i = 0 ; i < size - 1; i++)
  {
    for (int j = 0 ; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        temp= arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

    for (int i=0; i<size;i++){
        printf ("%d ", arr[i]);

    }
    return 0;

}
