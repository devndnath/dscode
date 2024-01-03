#include <stdio.h>
void removE (int source[], int length, int idx) {
if (idx >= 0 && idx < length) {
for (int i = idx; i < length - 1; i++) {
source[i] = source[i + 1];
}source[length - 1] = 0;
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 0, 0};
int length=sizeof(source)/sizeof(source[30]);
int idx=2;
printf ("Main Array \n");
printf ("===========\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}
removE(source,5,2);
printf("\nAfter removal:\n");
printf ("===========\n");
for (int i = 0; i < length; i++) {
printf("%d ", source[i]);
}
return 0;
}
