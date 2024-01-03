#include <stdio.h>
void shiftRight(int source[], int length, int k){
for(int i=length-1; i>=k;i--){
source[i]=source[i-k];
}
for(int i=0;i<k;i++){
source[i]=0;
}
}
int main() {
int source[]={10,20,30,40,50,60};
int k=3;
int length = sizeof(source) / sizeof(source[0]);
printf ("Main Array \n");
printf ("===========\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}
shiftRight(source,length,k);
printf ("\nShift left Array %d position \n", k);
printf ("===============================\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}

return 0;
}
