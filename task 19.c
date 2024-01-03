#include <stdio.h>
int BinarySearch(int array[], int first_index, int end_index, int number){
while (first_index <= end_index){
int mid = first_index + (end_index- first_index )/2;
if (array[mid] == number)
return mid;
if (array[mid] < number)
first_index = mid + 1;
else
end_index = mid - 1;
}
return -1;
}
int main(){
int array[] = {10,30,20,50,40};

int size=sizeof(array)/sizeof(array[0]);
int number = 20;
int number_index = BinarySearch(array, 0, size-1, number);
if(number_index == -1 ) {
printf("Input Number is not found in the array ");
}
else {
printf("Input Number index is : %d",number_index);
}
return 0;
}
