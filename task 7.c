#include <stdio.h>
#include <stdbool.h>
bool Repetition(int source[], int size) {
int countArray[100]={0};
for (int i=0;i<size;i++) {
countArray[source[i]]++;
}
int repetitions[100] = {0};
int maxRepetition = 0;
for (int i=0;i<100;i++) {
if (countArray[i] > 1) {
repetitions[countArray[i]]++;
maxRepetition=(countArray[i]>maxRepetition)?countArray[i]:maxRepetition;
}
}
for (int i=0;i<100;i++) {
if (repetitions[i]>=2) {
return true;
}
}
return false;
}
int main() {
int source[] = {4, 5, 6, 6, 4, 3, 6, 4};
int length=sizeof(source) / sizeof(source[0]);
printf ("input:{ ");
for(int i=0;i<length;i++){
printf("%d ", source[i]);
}
printf ("} ");
bool result1 = Repetition(source, sizeof(source) / sizeof(source[0]));
printf("Output: %s\n", result1 ? "True" : "False");

return 0;
}
