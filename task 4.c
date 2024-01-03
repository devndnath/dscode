#include <stdio.h>
void rotateRight(int source[], int length, int k){
int temparr[k];
for(int i=0;i<k;i++){
temparr[i]=source[length-k+i];
}
for (int i=0;i<length-k;i++){
source[k+i]=source[i];
}
for(int i=0;i<k;i++){
source[i]=temparr[i];
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
rotateRight(source,length,k);
printf ("\nRotate Right Array %d position \n", k);
printf ("===============================\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}

return 0;
}
