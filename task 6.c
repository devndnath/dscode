#include <stdio.h>
void removeAll(int source[], int length, int element) {
int newlength = 0;
for (int i = 0; i < length; i++) {
if (source[i] != element) {
source[newlength] = source[i];
newlength++;
}
}
for (int i = newlength; i < length; i++) {
source[i] = 0;
}
}
int main() {
int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
int length=sizeof(source)/sizeof(source[30]);
printf ("Main Array \n");
printf ("===========\n");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}
removeAll(source, 7, 2);
printf("\nAfter remove :\n");
printf ("===========\n");
for (int i = 0; i < length; i++) {
printf("%d ", source[i]);
}
return 0;
}
