#include <stdio.h>
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void printFibonacciSequence(int num) {
    int i;
	printf("Fibonacci sequence up to %d: ", num);
    for ( i = 0; i <= num; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci of %d = %d\n", num, fibonacci(num));
        printFibonacciSequence(num);
    }
    return 0;
}

Output:

Enter a non-negative integer: 8
Fibonacci of 8 = 21
Fibonacci sequence up to 8: 0 1 1 2 3 5 8 13 21

