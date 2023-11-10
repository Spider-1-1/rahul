#include <stdio.h>
#include<string.h>
int binarySearch(char str[], char key, int low, int high) {
    if (low > high) {
        return -1; 
    }
    int mid = (low + high) / 2;
    if (str[mid] == key) {
        return mid;
    } else if (str[mid] < key) {
        return binarySearch(str, key, mid + 1, high);  
    } else {
        return binarySearch(str, key, low, mid - 1);
    }
}
int main() {
    char str[50];
    char key;
    printf("Enter a  string: ");
    gets(str);
    printf("Enter a character to search: ");
    scanf(" %c", &key);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int result = binarySearch(str, key, 0, length - 1);
    if (result != -1) {
        printf("Character '%c' found at index %d\n", key, result);
    } else {
        printf("Character '%c' not found in the string\n", key);
    }
    return 0;
}

Output:

Enter a string: hello
Enter a character to search: o
Character 'o' found at index 4




