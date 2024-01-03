#include <stdio.h>

int fibonacci(int n) {
if (n <= 1) {
return n;
}
else {

return fibonacci(n - 1) + fibonacci(n - 2);
}
}
int main() {
int n = 5;
printf("Fibonacci number at position %d", n);
printf("\n----------------------------------\n");
printf("%d",fibonacci(n));
return 0;
}
