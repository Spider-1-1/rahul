#include <stdio.h>
int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {   
        return n % 10 + sumOfDigits(n / 10);
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int digitSum = sumOfDigits(number);
        printf("Sum of digits of %d = %d\n", number, digitSum);
    return 0;
}
}

Output:

Enter a positive integer: 12345
Sum of digits of 12345 = 15
