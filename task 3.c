#include <stdio.h>
void rotateLeft(int source[], int length, int k){
int temparr[k];
for(int i=0;i<k;i++){
temparr[i]=source[i];
}
for (int i=0;i<length-k;i++){
source[i]=source[k+i];
}
for(int i=0;i<k;i++){
source[length-k+i]=temparr[i];
}
}
int main() {

int source[]={10,20,30,40,50,60};
int k=3;
int length = sizeof(source) / sizeof(source[0]);
printf ("Originial Array \n");
printf ("===========\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}
rotateLeft(source,length,k);
printf ("\nRotate Left Array %d position \n", k);
printf ("===============================\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}

return 0;
}
