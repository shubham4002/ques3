#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH]; // Array to hold the input string
    int length; // Length of the input string
    int i; // Loop counter

    // Ask the user for the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input string including spaces

    // Remove the newline character if it was read
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Reverse the string
    char reversed[MAX_LENGTH];
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
