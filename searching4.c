#include <stdio.h>
#include<string.h>
int linearSearch(char str[], char key) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == key) {
            return index; 
        }
        index++;
    }
    return -1;  
}
int main() {
char str[50];
char key;
    printf("Enter a string: ");
       gets(str);
    printf("Enter a character to search: ");
    scanf(" %c", &key);
    int result = linearSearch(str, key);
    if (result != -1) {
        printf("Character %c found at index %d", key, result);
    } else {
        printf("Character  not found in the string");
    }

}

Output:

Enter a string: programming
Enter a character to search: g
Character g found at index 3

