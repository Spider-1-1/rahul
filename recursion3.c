#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}
int main() {
    int result = sumOfNaturalNumbers(10);
    printf("Sum of natural numbers up to 10: %d\n", result);

    return 0;
}

Output:

Sum of natural numbers up to 10: 55
