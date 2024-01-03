#include <stdio.h>
int main() {
    int arr[]={90, 80, 30, 70, 20, 10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp, t;
    for (int i=0; i<size-1;i++){
        temp=i;
        for (int j=i+1;j<size;j++){
            if (arr[temp]>arr[j])
            {
                temp=j;
            }

        }
        if (temp!=i){
            t=arr[i];
            arr[i]=arr[temp];
            arr[temp]=t;
        }

    }

    for (int i=0; i<size;i++){
        printf ("%d ", arr[i]);

    }
    return 0;

}
