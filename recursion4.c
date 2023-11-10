#include <stdio.h>
void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else {

        printf("Binary representation: ");
        if (decimalNumber == 0) {
            printf("0");
        } else {
            decimalToBinary(decimalNumber);
        }
        printf("\n");
    }
    return 0;
}

Output:

Enter a decimal number: 14
Binary representation: 1110
