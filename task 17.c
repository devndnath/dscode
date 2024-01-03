#include<stdio.h>
void selection(int a[], int size ){
int temp;
for(int i=0; i<size-1; i++){
for(int j=i+1;j<size; j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}

}
int main(){
int a[]={10, 30, 20, 50, 40};
int size=sizeof(a)/sizeof(a[0]);

printf("Unsorted Array \n");
for( int i=0; i<size; i++){
printf("%d ",a[i]);
}

selection(a, size);
printf("\nSorted array \n");
for( int i=0; i<size; i++){
printf("%d ",a[i]);
}

return 0;
}
