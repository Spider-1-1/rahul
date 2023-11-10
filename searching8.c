#include <stdio.h>
#include<string.h>
int binarySearch(char str[], char key, int length) {
    int low = 0;
    int high = length - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (str[mid] == key) {
            return mid;
        } else if (str[mid] < key) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    char str[50];
    char key;
    printf("Enter a sorted string: ");
    gets(str);
    printf("Enter a character to search: ");
    scanf(" %c", &key);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int result = binarySearch(str, key, length);
    if (result != -1) {
        printf("Character '%c' found at index %d", key, result);
    } else {
        printf("Character '%c' not found in the string", key);
    }
}

Output:

Enter a sorted string: abcdefghijklmnopqrstuvwxyz
Enter a character to search: p
Character 'p' found at index 15
